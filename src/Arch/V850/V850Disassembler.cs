#region License
/* 
 * Copyright (C) 1999-2020 John Källén.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

using System.Collections.Generic;
using System.Linq;
using Reko.Core;
using Reko.Core.Lib;
using Reko.Core.Machine;
using Reko.Core.Types;

namespace Reko.Arch.V850
{
    public class V850Disassembler : DisassemblerBase<V850Instruction, Mnemonic>
    {
        private static readonly MaskDecoder<V850Disassembler, Mnemonic, V850Instruction> rootDecoder;

        private readonly V850Architecture arch;
        private readonly EndianImageReader rdr;
        private readonly List<MachineOperand> ops;
        private Address addr;

        public V850Disassembler(V850Architecture arch, EndianImageReader rdr)
        {
            this.arch = arch;
            this.rdr = rdr;
            this.ops = new List<MachineOperand>();
        }

        public override V850Instruction DisassembleInstruction()
        {
            this.addr = rdr.Address;
            if (!rdr.TryReadLeUInt16(out ushort uInstr))
                return null;
            ops.Clear();
            var instr = rootDecoder.Decode(uInstr, this);
            instr.Address = addr;
            instr.Length = (int)(rdr.Address - addr);
            return instr;
        }

        public override V850Instruction MakeInstruction(InstrClass iclass, Mnemonic mnemonic)
        {
            return new V850Instruction
            {
                InstructionClass = iclass,
                Mnemonic = mnemonic,
                Operands = this.ops.ToArray(),
            };
        }

        public override V850Instruction CreateInvalidInstruction()
        {
            return new V850Instruction
            {
                Mnemonic = Mnemonic.invalid,
                Operands = MachineInstruction.NoOperands,
            };
        }

        public override V850Instruction NotYetImplemented(uint wInstr, string message)
        {
            var len = (int)(rdr.Address - addr);
            var rdr2 = rdr.Clone();
            rdr.Offset -= len;
            var hexBytes = string.Join("", rdr.ReadBytes(len).Select(b => b.ToString("X2")));
            base.EmitUnitTest("V850", hexBytes, message, "V850Dis", this.addr, w =>
            {
                w.WriteLine("AssertCode(\"@@@\", \"{0}\");", hexBytes);
            });
            return CreateInvalidInstruction();
        }

        private static Mutator<V850Disassembler> Reg(int bitpos, int bitlen)
        {
            var field = new Bitfield(bitpos, bitlen);
            return (u, d) =>
            {
                var iReg = field.Read(u);
                var reg = Registers.GpRegs[iReg];
                d.ops.Add(new RegisterOperand(reg));
                return true;
            };
        }
        private static readonly Mutator<V850Disassembler> R = Reg(0, 5);
        private static readonly Mutator<V850Disassembler> r = Reg(11, 5);

        private static Mutator<V850Disassembler> Is(int bitpos, int bitlen)
        {
            var field = new Bitfield(bitpos, bitlen);
            return (u, d) =>
            {
                var imm = field.ReadSigned(u);
                d.ops.Add(ImmediateOperand.Word32(imm));
                return true;
            };
        }
        private static readonly Mutator<V850Disassembler> Is0_5 = Is(0, 5);


        private static Mutator<V850Disassembler> Mep(int bitpos, int length, PrimitiveType dt)
        {
            var ep = Registers.ElementPtr;
            var field = new Bitfield(bitpos, length);
            return (u, d) =>
            {
                var offset = (int) field.Read(u);
                var mem = new MemoryOperand(dt, ep, offset);
                d.ops.Add(mem);
                return true;
            };
        }
        private static readonly Mutator<V850Disassembler> Mep_b = Mep(0, 7, PrimitiveType.Byte);
        private static readonly Mutator<V850Disassembler> Mep_h = Mep(0, 7, PrimitiveType.Word16);

        private static Decoder<V850Disassembler, Mnemonic, V850Instruction> Instr(Mnemonic mnemonic, InstrClass iclass, params Mutator<V850Disassembler> [] mutators)
        {
            return new InstrDecoder<V850Disassembler, Mnemonic, V850Instruction>(iclass, mnemonic, mutators);
        }

        private static Decoder<V850Disassembler, Mnemonic, V850Instruction> Nyi(string message)
        {
            return new NyiDecoder<V850Disassembler, Mnemonic, V850Instruction>(message);
        }

        static V850Disassembler()
        {
            var invalid = Instr(Mnemonic.invalid, InstrClass.Invalid);

            rootDecoder = Sparse(5, 6, Nyi(""),
                (0, Select((0, 5), u => u != 0,
                    Instr(Mnemonic.mov, R,r), 
                    Instr(Mnemonic.nop, InstrClass.Padding | InstrClass.Linear | InstrClass.Zero))),
                (8, Instr(Mnemonic.or, R,r)),
                (16, Select((0, 5), u => u != 0,
                    Instr(Mnemonic.mov, Is0_5,r),
                    invalid)),
                (24, Instr(Mnemonic.sld_b, Mep_b, r)),
                (25, Instr(Mnemonic.sld_b, Mep_b, r)),
                (26, Instr(Mnemonic.sld_b, Mep_b, r)),
                (27, Instr(Mnemonic.sld_b, Mep_b,r)),

                (28, Instr(Mnemonic.sst_b, r, Mep_b)),
                (29, Instr(Mnemonic.sst_b, r, Mep_b)),
                (30, Instr(Mnemonic.sst_b, r, Mep_b)),
                (31, Instr(Mnemonic.sst_b, r, Mep_b)),

                (32, Instr(Mnemonic.sld_h, Mep_h, r)),
                (33, Instr(Mnemonic.sld_h, Mep_h, r)),
                (34, Instr(Mnemonic.sld_h, Mep_h, r)),
                (35, Instr(Mnemonic.sld_h, Mep_h, r)),

                (36, Instr(Mnemonic.sst_h, r, Mep_h)),
                (37, Instr(Mnemonic.sst_h, r, Mep_h)),
                (38, Instr(Mnemonic.sst_h, r, Mep_h)),
                (39, Instr(Mnemonic.sst_h, r, Mep_h)),

                (40, Mask(0, 1, "Sld.w/Sst.w",
                    Instr(Mnemonic.sld_w, Mep(1, 6, PrimitiveType.Word32), r),
                    Instr(Mnemonic.sst_w, r, Mep(1, 6, PrimitiveType.Word32))))

                    );
        }
    }
}