/*
 * File:          sidl_BaseException_Module.c
 * Symbol:        sidl.BaseException-v0.9.3
 * Symbol Type:   interface
 * Babel Version: 0.10.8
 * Release:       $Name$
 * Revision:      @(#) $Id$
 * Description:   implement a C extension type for a sidl extendable
 * 
 * Copyright (c) 2000-2002, The Regents of the University of California.
 * Produced at the Lawrence Livermore National Laboratory.
 * Written by the Components Team <components@llnl.gov>
 * All rights reserved.
 * 
 * This file is part of Babel. For more information, see
 * http://www.llnl.gov/CASC/components/. Please read the COPYRIGHT file
 * for Our Notice and the LICENSE file for the GNU Lesser General Public
 * License.
 * 
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License (as published by
 * the Free Software Foundation) version 2.1 dated February 1999.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the IMPLIED WARRANTY OF
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the terms and
 * conditions of the GNU Lesser General Public License for more details.
 * 
 * You should have recieved a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 * babel-version = 0.10.8
 */

/*
 * THIS CODE IS AUTOMATICALLY GENERATED BY THE BABEL
 * COMPILER. DO NOT EDIT THIS!
 * 
 * This file contains the implementation of a Python C
 * extension type (i.e. a Python type implemented in C).
 * This extension type provides Python interface to the
 * sidl type sidl.BaseException.
 */


/**
 * Symbol "sidl.BaseException" (version 0.9.3)
 * 
 * Every exception implements <code>BaseException</code>. This interface
 * declares the basic functionality to get and set error messages and stack
 * traces.
 */
#define sidl_BaseException_INTERNAL 1
#include "sidl_BaseException_Module.h"
#ifndef included_sidl_BaseException_IOR_h
#include "sidl_BaseException_IOR.h"
#endif
#include "sidlObjA.h"
#include "sidlPyArrays.h"
#include "Numeric/arrayobject.h"
#ifndef included_sidl_Loader_h
#include "sidl_Loader.h"
#endif
#ifndef included_sidl_header_h
#include "sidl_header.h"
#endif
#ifndef included_sidl_interface_IOR_h
#include "sidl_interface_IOR.h"
#endif
#include "sidl_ClassInfo_Module.h"
#include "sidl_BaseInterface_Module.h"
#include <stdlib.h>
#include <string.h>

staticforward PyTypeObject _sidl_BaseExceptionType;

static PyObject *
pStub_BaseException_addLine(PyObject *_self, PyObject *_args,                 \
  PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct sidl_BaseException__object *_self_ior =
    ((struct sidl_BaseException__object *)
     sidl_Cast(_self, "sidl.BaseException"));
  if (_self_ior) {
    char* traceline = NULL;
    static char *_kwlist[] = {
      "traceline",
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "z", _kwlist,
      &traceline);
    if (_okay) {
      (*(_self_ior->d_epv->f_addLine))(_self_ior->d_object, traceline);
      _return_value = Py_None;
      Py_INCREF(_return_value);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a sidl.BaseException");
  }
  return _return_value;
}

static PyObject *
pStub_BaseException_getNote(PyObject *_self, PyObject *_args,                 \
  PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct sidl_BaseException__object *_self_ior =
    ((struct sidl_BaseException__object *)
     sidl_Cast(_self, "sidl.BaseException"));
  if (_self_ior) {
    static char *_kwlist[] = {
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "", _kwlist);
    if (_okay) {
      char* _return = NULL;
      _return = (*(_self_ior->d_epv->f_getNote))(_self_ior->d_object);
      _return_value = Py_BuildValue(
        "z",
        _return);
      free((void *)_return);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a sidl.BaseException");
  }
  return _return_value;
}

static PyObject *
pStub_BaseException_add(PyObject *_self, PyObject *_args, PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct sidl_BaseException__object *_self_ior =
    ((struct sidl_BaseException__object *)
     sidl_Cast(_self, "sidl.BaseException"));
  if (_self_ior) {
    char* filename = NULL;
    int32_t lineno = (int32_t) 0;
    char* methodname = NULL;
    long _proxy_lineno;
    static char *_kwlist[] = {
      "filename",
      "lineno",
      "methodname",
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "zlz", _kwlist,
      &filename,
      &_proxy_lineno,
      &methodname);
    if (_okay) {
      lineno = _proxy_lineno;
      (*(_self_ior->d_epv->f_add))(_self_ior->d_object, filename, lineno,     \
        methodname);
      _return_value = Py_None;
      Py_INCREF(_return_value);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a sidl.BaseException");
  }
  return _return_value;
}

static PyObject *
pStub_BaseException_getTrace(PyObject *_self, PyObject *_args,                \
  PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct sidl_BaseException__object *_self_ior =
    ((struct sidl_BaseException__object *)
     sidl_Cast(_self, "sidl.BaseException"));
  if (_self_ior) {
    static char *_kwlist[] = {
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "", _kwlist);
    if (_okay) {
      char* _return = NULL;
      _return = (*(_self_ior->d_epv->f_getTrace))(_self_ior->d_object);
      _return_value = Py_BuildValue(
        "z",
        _return);
      free((void *)_return);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a sidl.BaseException");
  }
  return _return_value;
}

static PyObject *
pStub_BaseException_setNote(PyObject *_self, PyObject *_args,                 \
  PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct sidl_BaseException__object *_self_ior =
    ((struct sidl_BaseException__object *)
     sidl_Cast(_self, "sidl.BaseException"));
  if (_self_ior) {
    char* message = NULL;
    static char *_kwlist[] = {
      "message",
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "z", _kwlist,
      &message);
    if (_okay) {
      (*(_self_ior->d_epv->f_setNote))(_self_ior->d_object, message);
      _return_value = Py_None;
      Py_INCREF(_return_value);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a sidl.BaseException");
  }
  return _return_value;
}

static int
sidl_BaseException_createCast(PyObject *self, PyObject *args,                 \
  PyObject *kwds) {
  struct sidl_BaseException__object *optarg = NULL;
  static char *_kwlist[] = { "sobj", NULL };
  int _okay = PyArg_ParseTupleAndKeywords(args, kwds, "O&", _kwlist,          \
    (void *)sidl_BaseException__convert, &optarg);
  if (_okay) {
    return sidl_Object_Init(
      (SPObject *)self,
      (struct sidl_BaseInterface__object *)optarg->d_object,
      sidl_PyStealRef);
  }
  return -1;
}

static PyMethodDef _BaseExceptionModuleMethods[] = {
  { NULL, NULL }
};

static PyMethodDef _BaseExceptionObjectMethods[] = {
  { "add", (PyCFunction)pStub_BaseException_add,
  (METH_VARARGS | METH_KEYWORDS),
"\
add(in string filename,\n\
    in int lineno,\n\
    in string methodname)\n\
RETURNS\n\
    None\n\
\n\
\
Formats and adds an entry to the stack trace based on the \n\
file name, line number, and method name."
   },
  { "addLine", (PyCFunction)pStub_BaseException_addLine,
  (METH_VARARGS | METH_KEYWORDS),
"\
addLine(in string traceline)\n\
RETURNS\n\
    None\n\
\n\
\
Adds a stringified entry/line to the stack trace."
   },
  { "getNote", (PyCFunction)pStub_BaseException_getNote,
  (METH_VARARGS | METH_KEYWORDS),
"\
getNote()\n\
RETURNS\n\
   (string _return)\n\
\n\
\
Return the message associated with the exception."
   },
  { "getTrace", (PyCFunction)pStub_BaseException_getTrace,
  (METH_VARARGS | METH_KEYWORDS),
"\
getTrace()\n\
RETURNS\n\
   (string _return)\n\
\n\
\
Returns formatted string containing the concatenation of all \n\
tracelines."
   },
  { "setNote", (PyCFunction)pStub_BaseException_setNote,
  (METH_VARARGS | METH_KEYWORDS),
"\
setNote(in string message)\n\
RETURNS\n\
    None\n\
\n\
\
Set the message associated with the exception."
   },
  { NULL, NULL }
};

static PyTypeObject _sidl_BaseExceptionType = {
  PyObject_HEAD_INIT(NULL)
  0,      /* ob_size */
  "sidl.BaseException.BaseException", /* tp_name */
  0,      /* tp_basicsize */
  0,      /* tp_itemsize */
  0,      /* tp_dealloc */
  0,      /* tp_print */
  0,      /* tp_getattr */
  0,      /* tp_setattr */
  0,      /* tp_compare */
  0,      /* tp_repr */
  0,      /* tp_as_number */
  0,      /* tp_as_sequence */
  0,      /* tp_as_mapping */
  0,      /* tp_hash  */
  0,      /* tp_call */
  0,      /* tp_str */
  0,      /* tp_getattro */
  0,      /* tp_setattro */
  0,      /* tp_as_buffer */
  Py_TPFLAGS_DEFAULT, /* tp_flags */
  "\
\
Every exception implements <code>BaseException</code>. This interface\n\
declares the basic functionality to get and set error messages and stack\n\
traces.", /* tp_doc */
  0,      /* tp_traverse */
  0,       /* tp_clear */
  0,       /* tp_richcompare */
  0,       /* tp_weaklistoffset */
  0,       /* tp_iter */
  0,       /* tp_iternext */
  _BaseExceptionObjectMethods, /* tp_methods */
  0,       /* tp_members */
  0,       /* tp_getset */
  0,       /* tp_base */
  0,       /* tp_dict */
  0,       /* tp_descr_get */
  0,       /* tp_descr_set */
  0,       /* tp_dictoffset */
  sidl_BaseException_createCast,   /* tp_init */
  0,       /* tp_alloc */
  0,       /* tp_new */
};

sidl_BaseException__wrap_RETURN
sidl_BaseException__wrap sidl_BaseException__wrap_PROTO {
  PyObject *result;
  if (sidlobj) {
    result = _sidl_BaseExceptionType.tp_new(&_sidl_BaseExceptionType, NULL,   \
      NULL);
    if (result) {
      if (sidl_Object_Init(
        (SPObject *)result,
        (struct sidl_BaseInterface__object *)(sidlobj->d_object),
        sidl_PyStealRef))
      {
        Py_DECREF(result);
        result = NULL;
      }
    }
  }
  else {
    result = Py_None;
    Py_INCREF(result);
  }
  return result;
}

sidl_BaseException__weakRef_RETURN
sidl_BaseException__weakRef sidl_BaseException__weakRef_PROTO {
  PyObject *result;
  if (sidlobj) {
    result = _sidl_BaseExceptionType.tp_new(&_sidl_BaseExceptionType, NULL,   \
      NULL);
    if (result) {
      if (sidl_Object_Init(
        (SPObject *)result,
        (struct sidl_BaseInterface__object *)(sidlobj->d_object),
        sidl_PyWeakRef))
      {
        Py_DECREF(result);
        result = NULL;
      }
    }
  }
  else {
    result = Py_None;
    Py_INCREF(result);
  }
  return result;
}

sidl_BaseException_deref_RETURN
sidl_BaseException_deref sidl_BaseException_deref_PROTO {
  if (sidlobj) {
    (*(sidlobj->d_epv->f_deleteRef))(sidlobj->d_object);
  }
}

sidl_BaseException__newRef_RETURN
sidl_BaseException__newRef sidl_BaseException__newRef_PROTO {
  PyObject *result;
  if (sidlobj) {
    result = _sidl_BaseExceptionType.tp_new(&_sidl_BaseExceptionType, NULL,   \
      NULL);
    if (result) {
      if (sidl_Object_Init(
        (SPObject *)result,
        (struct sidl_BaseInterface__object *)(sidlobj->d_object),
        sidl_PyNewRef))
      {
        Py_DECREF(result);
        result = NULL;
      }
    }
  }
  else {
    result = Py_None;
    Py_INCREF(result);
  }
  return result;
}

sidl_BaseException__addRef_RETURN
sidl_BaseException__addRef sidl_BaseException__addRef_PROTO {
  if (sidlobj) {
    (*(sidlobj->d_epv->f_addRef))(sidlobj->d_object);
  }
}

sidl_BaseException_PyType_RETURN
sidl_BaseException_PyType sidl_BaseException_PyType_PROTO {
  Py_INCREF(&_sidl_BaseExceptionType);
  return &_sidl_BaseExceptionType;
}

sidl_BaseException__convert_RETURN
sidl_BaseException__convert sidl_BaseException__convert_PROTO {
  *sidlobj = sidl_Cast(obj, "sidl.BaseException");
  if (*sidlobj) {
    (*((*sidlobj)->d_epv->f_addRef))((*sidlobj)->d_object);
  }
  else if (obj != Py_None) {
    PyErr_SetString(PyExc_TypeError, 
      "argument is not a(n) sidl.BaseException");
    return 0;
  }
  return 1;
}

static int
_convertPython(void *sidlarray, const int *ind, PyObject *pyobj)
{
  struct sidl_BaseException__object *sidlobj;
  if (sidl_BaseException__convert(pyobj, &sidlobj)) {
    sidl_interface__array_set((struct sidl_interface__array *)sidlarray,
    ind, (struct sidl_BaseInterface__object *)sidlobj);
    if (sidlobj) {
      sidl_BaseInterface_deleteRef((struct sidl_BaseInterface__object         \
        *)sidlobj);
    }
    return FALSE;
  }
  return TRUE;
}

sidl_BaseException__convert_python_array_RETURN
sidl_BaseException__convert_python_array                                      \
  sidl_BaseException__convert_python_array_PROTO {
  int result = 0;
  *sidlarray = NULL;
  if (obj == Py_None) {
    result = TRUE;
  }
  else {
    PyObject *pya = PyArray_FromObject(obj, PyArray_OBJECT, 0, 0);
    if (pya) {
      if (PyArray_OBJECT == ((PyArrayObject *)pya)->descr->type_num) {
        int dimen, lower[SIDL_MAX_ARRAY_DIMENSION],
          upper[SIDL_MAX_ARRAY_DIMENSION],
          stride[SIDL_MAX_ARRAY_DIMENSION];
        if (sidl_array__extract_python_info
          (pya, &dimen, lower, upper, stride))
        {
            *sidlarray = (struct                                              \
              sidl_BaseException__array*)sidl_interface__array_createRow
            (dimen, lower, upper);
          result = sidl_array__convert_python
            (pya, dimen, *sidlarray, _convertPython);
          if (*sidlarray && !result) {
            sidl_interface__array_deleteRef(
              (struct  sidl_interface__array *)*sidlarray);
            *sidlarray = NULL;
          }
        }
      }
      Py_DECREF(pya);
    }
  }
  return result;
}

static int
_convertSIDL(void *sidlarray, const int *ind, PyObject **dest)
{
  struct sidl_BaseException__object *sidlobj = (struct                        \
    sidl_BaseException__object*)
  sidl_interface__array_get((struct sidl_interface__array *)
    sidlarray, ind);
  *dest = sidl_BaseException__wrap(sidlobj);
  return (*dest == NULL);
}

sidl_BaseException__convert_sidl_array_RETURN
sidl_BaseException__convert_sidl_array                                        \
  sidl_BaseException__convert_sidl_array_PROTO {
  PyObject *pya = NULL;
  if (sidlarray) {
    const int dimen = sidlArrayDim(sidlarray);
    int i;
    int *lower = (int *)malloc(sizeof(int) * dimen);
    int *upper = (int *)malloc(sizeof(int) * dimen);
    int *numelem = (int *)malloc(sizeof(int) * dimen);
    for(i = 0; i < dimen; ++i) {
      lower[i] = sidlLower(sidlarray, i);
      upper[i] = sidlUpper(sidlarray, i);
      numelem[i] = 1 + upper[i] - lower[i];
    }
    pya = PyArray_FromDims(dimen, numelem, PyArray_OBJECT);
    if (pya) {
      if (!sidl_array__convert_sidl(pya, dimen, lower, upper,
        numelem, sidlarray, _convertSIDL))
      {
        Py_DECREF(pya);
        pya = NULL;
      }
    }
    free(numelem);
    free(upper);
    free(lower);
  }
  else {
    Py_INCREF(Py_None);
    pya = Py_None;
  }
  return pya;
}

void
initBaseException(void) {
  PyObject *module, *dict, *c_api;
  PyObject *_exceptionBases, *_exceptionDict, *_exceptionName;
  static void *ExternalAPI[sidl_BaseException__API_NUM];
  module = Py_InitModule3("BaseException", _BaseExceptionModuleMethods, "\
\
Every exception implements <code>BaseException</code>. This interface\n\
declares the basic functionality to get and set error messages and stack\n\
traces."
  );
  dict = PyModule_GetDict(module);
  ExternalAPI[sidl_BaseException__wrap_NUM] = (void*)sidl_BaseException__wrap;
  ExternalAPI[sidl_BaseException__convert_NUM] =                              \
    (void*)sidl_BaseException__convert;
  ExternalAPI[sidl_BaseException__convert_python_array_NUM] =                 \
    (void*)sidl_BaseException__convert_python_array;
  ExternalAPI[sidl_BaseException__convert_sidl_array_NUM] =                   \
    (void*)sidl_BaseException__convert_sidl_array;
  ExternalAPI[sidl_BaseException__weakRef_NUM] =                              \
    (void*)sidl_BaseException__weakRef;
  ExternalAPI[sidl_BaseException_deref_NUM] = (void*)sidl_BaseException_deref;
  ExternalAPI[sidl_BaseException__newRef_NUM] =                               \
    (void*)sidl_BaseException__newRef;
  ExternalAPI[sidl_BaseException__addRef_NUM] =                               \
    (void*)sidl_BaseException__addRef;
  ExternalAPI[sidl_BaseException_PyType_NUM] =                                \
    (void*)sidl_BaseException_PyType;
  import_SIDLObjA();
  if (PyErr_Occurred()) {
    Py_FatalError("Error importing sidlObjA module.");
  }
  /* Initialize to temporary value. */
  Py_INCREF(Py_None);
  ExternalAPI[sidl_BaseException__type_NUM] = Py_None;
  c_api = PyCObject_FromVoidPtr((void *)ExternalAPI, NULL);
  PyDict_SetItemString(dict, "_C_API", c_api);
  Py_XDECREF(c_api);
  import_SIDLPyArrays();
  if (PyErr_Occurred()) {
    Py_FatalError("Error importing sidlPyArrays module.");
  }
  import_array();
  if (PyErr_Occurred()) {
    Py_FatalError("Error importing Numeric Python module.");
  }
  sidl_BaseInterface__import();
  _sidl_BaseExceptionType.tp_base = sidl_BaseInterface_PyType();
  _sidl_BaseExceptionType.tp_bases = PyTuple_New(1);
  PyTuple_SetItem(_sidl_BaseExceptionType.tp_bases,0,                         \
    (PyObject *)sidl_BaseInterface_PyType());
  if (PyType_Ready(&_sidl_BaseExceptionType) < 0) {
    PyErr_Print();
    fprintf(stderr, "PyType_Ready on sidl.BaseException failed.\n");
    return;
  }
  Py_INCREF(&_sidl_BaseExceptionType);
  PyDict_SetItemString(dict, "BaseException",                                 \
    (PyObject *)&_sidl_BaseExceptionType);
  sidl_ClassInfo__import();
  _exceptionBases = PyTuple_New(1);
  {
    PyObject *baseModule = PyImport_ImportModule("sidlBaseException");
    PyObject *baseDict = PyModule_GetDict(baseModule);
    PyObject *baseException = PyDict_GetItemString(baseDict, 
      "sidlBaseException");
    Py_XINCREF(baseException);
    PyTuple_SetItem(_exceptionBases, 0, baseException);
    Py_XDECREF(baseDict);
  }
  _exceptionDict = PyDict_New();
  PyDict_SetItemString(_exceptionDict, "__module__",
    PyString_InternFromString("sidl.BaseException"));
  _exceptionName = PyString_InternFromString("_Exception");
  sidl_BaseException__type = PyClass_New(_exceptionBases, _exceptionDict,     \
    _exceptionName);
  Py_XDECREF(_exceptionBases);
  Py_XDECREF(_exceptionDict);
  Py_XDECREF(_exceptionName);
  Py_XINCREF(sidl_BaseException__type);
  PyDict_SetItemString(dict, "_Exception", sidl_BaseException__type);
  ExternalAPI[sidl_BaseException__type_NUM] = sidl_BaseException__type;
  /*
   * If it's safe, add "Exception" for backward compatibility
   * with Babel 0.10.2 (and previous).
   */

  if (!PyDict_GetItemString(dict, "Exception")) {
    Py_XINCREF(sidl_BaseException__type);
    PyDict_SetItemString(dict, "Exception", sidl_BaseException__type);
  }
}
