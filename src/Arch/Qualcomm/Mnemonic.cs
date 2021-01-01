#region License
/* 
 * Copyright (C) 1999-2021 John Källén.
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

namespace Reko.Arch.Qualcomm
{
    public enum Mnemonic
    {
        Invalid,

        ADDEQ,
        ANDEQ,
        ASSIGN,
        EQ,
        GE,
        LE,
        SUBEQ,
        NE,
        NOT,
        OREQ,
        SIDEEFFECT,
        XOREQ,

        add,
        allocframe,
        and,
        asl,
        asr,
        bitsclr,
        call,
        callr,
        cl0,
        cl1,
        clb,
        clrbit,
        cmp__eq,
        cmp__gt,
        cmp__gtu,
        cmpb__eq,
        cmpb__gt,
        cmpb__gtu,
        cmph__eq,
        cmph__gt,
        cmph__gtu,
        combine,
        convert_d2df,
        convert_df2d,
        convert_df2ud,
        convert_ud2df,
        crswap,
        dealloc_return,
        deallocframe,
        dfclass,
        extractu,
        hintjr,
        icdatar,
        icdtagr,
        icdtagw,
        jump,
        jumpr,
        loop0,
        loop1,
        lsl,
        lsr,
        max,
        maxu,
        memub,
        memw,
        memw_locked,
        min,
        minu,
        modwrap,
        mpyi,
        mux,
        nmi,
        nop,
        normamt,
        or,
        packhl,
        pause,
        rol,
        setbit,
        sfclass,
        start,
        stop,
        sub,
        togglebit,
        trap0,
        trap1,
        tstbit,
        valignb,
        xor,
        vsathub,
        vsathuw,
        vsathw,
        vsathb,
        vsplatb,
        vitpack,
        extract,
        insert,
        not,
        dfcmp__eq,
        dfcmp__gt,
        dfcmp__ge,
        dfcmp__uo,
        addasl,
        memd_locked,
        memw_phys,
        sxth,
        sfmpy,
        sxtb,
        zxth,
        bitsset,
        sfcmp__ge,
        sfcmp__uo,
        sfcmp__eq,
        sfcmp__gt,
        dccleaninva,
        vasrh,
        vlsrh,
        vaslh,
        neg,
        abs,
        vconj,
        getimask,
        iassignr,
        mpy,
        mpyu,
        fastcorner9,
        trace,
        vsxtbh,
        vzxtbh,
        vsxthw,
        vzxthw,
        sxtw,
        convert_sf2df,
        convert_uw2df,
        convert_w2df,
        convert_sf2ud,
        convert_sf2d,
        vsplath,
        vavgh,
        vnavgh,
        vaddub,
        vaddh,
        vaddw,
        vadduh,
        vsubub,
        vsubh,
        vsubw,
        vsubuh,
        vcmpw__eq,
        vcmpw__gt,
        vcmpw__gtu,
        vcmph__eq,
        vcmph__gt,
        vcmph__gtu,
        vcmpb__eq,
        vcmpb__gtu,
        vcmpb__gt,
        any8,
        tlbmatch,
        dccleana,
        dcinva,
        tlbw,
        rte,
        rteunlock,
        dczeroa,
        zxtb,
        aslh,
        asrh,
        vasrw,
        vlsrw,
        vaslw,
        vlslw,
        vlslh,
        shuffeb,
        shuffob,
        shuffeh,
        lfs,
        decbin,
        convert_df2sf,
        vsatwh,
        vsatwuh,
        ctlbw,
        tlboc,
        brkpt,
        vmux,
        parity,
        bitsplit,
        dckill,
        dcleanidx,
        dcinvdx,
        dccleaninvdx,
        swi,
        cswi,
        iassignw,
        ciad,
        wait,
        resume,
        vabsh,
        vabsw,
        dcfetch,
        barrier,
        l2kill,
        l2gunlock,
        l2gclean,
        l2gcleaninv,
        syncht,
        l2cleaninvidx,
        icinva,  
        icinvidx,
        ickill,
        isync,
        sp1loop0,
        sp2loop0,
        sp3loop0,
        swiz,
        ct0,
        ct1,
        convert_df2w,
        setimask,
        siad,
        tlbp,
        tlbinvasid,
        all8,
        brev,
        tlbr,
    }
}
