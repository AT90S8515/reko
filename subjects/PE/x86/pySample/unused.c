// pySample.c
// Generated by decompiling pySample.dll
// using Reko decompiler version 0.9.0.0.

#include "pySample.h"

// 10001140: Register (ptr32 Eq_n) py_unused(Stack (ptr32 Eq_n) self, Stack (ptr32 Eq_n) args)
PyObject * py_unused(PyObject * self, PyObject * args)
{
	PyObject * eax_n = PyArg_ParseTuple(args, ":unused");
	if (eax_n == null)
		return eax_n;
	PyObject * eax_n = &_Py_NoneStruct;
	++eax_n->ob_refcnt;
	return &_Py_NoneStruct;
}
