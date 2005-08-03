/*
 * File:          sidl_BaseInterface_Module.c
 * Symbol:        sidl.BaseInterface-v0.9.3
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
 * sidl type sidl.BaseInterface.
 */


/**
 * Symbol "sidl.BaseInterface" (version 0.9.3)
 * 
 * Every interface in <code>sidl</code> implicitly inherits
 * from <code>BaseInterface</code>, and it is implemented
 * by <code>BaseClass</code> below.
 */
#define sidl_BaseInterface_INTERNAL 1
#include "sidl_BaseInterface_Module.h"
#ifndef included_sidl_BaseInterface_IOR_h
#include "sidl_BaseInterface_IOR.h"
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
#include <stdlib.h>
#include <string.h>

staticforward PyTypeObject _sidl_BaseInterfaceType;

static PyObject *
pStub_BaseInterface_isType(PyObject *_self, PyObject *_args,                  \
  PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct sidl_BaseInterface__object *_self_ior =
    ((struct sidl_BaseInterface__object *)
     sidl_Cast(_self, "sidl.BaseInterface"));
  if (_self_ior) {
    char* name = NULL;
    static char *_kwlist[] = {
      "name",
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "z", _kwlist,
      &name);
    if (_okay) {
      sidl_bool _return = (sidl_bool) 0;
      int _proxy__return;
      _return = (*(_self_ior->d_epv->f_isType))(_self_ior->d_object, name);
      _proxy__return = _return;
      _return_value = Py_BuildValue(
        "i",
        _proxy__return);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a sidl.BaseInterface");
  }
  return _return_value;
}

static PyObject *
pStub_BaseInterface_deleteRef(PyObject *_self, PyObject *_args,               \
  PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct sidl_BaseInterface__object *_self_ior =
    ((struct sidl_BaseInterface__object *)
     sidl_Cast(_self, "sidl.BaseInterface"));
  if (_self_ior) {
    static char *_kwlist[] = {
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "", _kwlist);
    if (_okay) {
      (*(_self_ior->d_epv->f_deleteRef))(_self_ior->d_object);
      _return_value = Py_None;
      Py_INCREF(_return_value);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a sidl.BaseInterface");
  }
  return _return_value;
}

static PyObject *
pStub_BaseInterface_isSame(PyObject *_self, PyObject *_args,                  \
  PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct sidl_BaseInterface__object *_self_ior =
    ((struct sidl_BaseInterface__object *)
     sidl_Cast(_self, "sidl.BaseInterface"));
  if (_self_ior) {
    struct sidl_BaseInterface__object* iobj = NULL;
    static char *_kwlist[] = {
      "iobj",
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "O&", _kwlist,
      (void *)sidl_BaseInterface__convert, &iobj);
    if (_okay) {
      sidl_bool _return = (sidl_bool) 0;
      int _proxy__return;
      _return = (*(_self_ior->d_epv->f_isSame))(_self_ior->d_object, iobj);
      _proxy__return = _return;
      _return_value = Py_BuildValue(
        "i",
        _proxy__return);
      sidl_BaseInterface_deref(iobj);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a sidl.BaseInterface");
  }
  return _return_value;
}

static PyObject *
pStub_BaseInterface_getClassInfo(PyObject *_self, PyObject *_args,            \
  PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct sidl_BaseInterface__object *_self_ior =
    ((struct sidl_BaseInterface__object *)
     sidl_Cast(_self, "sidl.BaseInterface"));
  if (_self_ior) {
    static char *_kwlist[] = {
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "", _kwlist);
    if (_okay) {
      struct sidl_ClassInfo__object* _return = NULL;
      _return = (*(_self_ior->d_epv->f_getClassInfo))(_self_ior->d_object);
      _return_value = Py_BuildValue(
        "O&",
        (void *)sidl_ClassInfo__wrap, _return);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a sidl.BaseInterface");
  }
  return _return_value;
}

static PyObject *
pStub_BaseInterface_queryInt(PyObject *_self, PyObject *_args,                \
  PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct sidl_BaseInterface__object *_self_ior =
    ((struct sidl_BaseInterface__object *)
     sidl_Cast(_self, "sidl.BaseInterface"));
  if (_self_ior) {
    char* name = NULL;
    static char *_kwlist[] = {
      "name",
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "z", _kwlist,
      &name);
    if (_okay) {
      struct sidl_BaseInterface__object* _return = NULL;
      _return = (*(_self_ior->d_epv->f_queryInt))(_self_ior->d_object, name);
      _return_value = Py_BuildValue(
        "O&",
        (void *)sidl_BaseInterface__wrap, _return);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a sidl.BaseInterface");
  }
  return _return_value;
}

static PyObject *
pStub_BaseInterface_addRef(PyObject *_self, PyObject *_args,                  \
  PyObject *_kwdict) {
  PyObject *_return_value = NULL;
  struct sidl_BaseInterface__object *_self_ior =
    ((struct sidl_BaseInterface__object *)
     sidl_Cast(_self, "sidl.BaseInterface"));
  if (_self_ior) {
    static char *_kwlist[] = {
      NULL
    };
    const int _okay = PyArg_ParseTupleAndKeywords(
      _args, _kwdict, 
      "", _kwlist);
    if (_okay) {
      (*(_self_ior->d_epv->f_addRef))(_self_ior->d_object);
      _return_value = Py_None;
      Py_INCREF(_return_value);
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError, 
      "self pointer is not a sidl.BaseInterface");
  }
  return _return_value;
}

static int
sidl_BaseInterface_createCast(PyObject *self, PyObject *args,                 \
  PyObject *kwds) {
  struct sidl_BaseInterface__object *optarg = NULL;
  static char *_kwlist[] = { "sobj", NULL };
  int _okay = PyArg_ParseTupleAndKeywords(args, kwds, "O&", _kwlist,          \
    (void *)sidl_BaseInterface__convert, &optarg);
  if (_okay) {
    return sidl_Object_Init(
      (SPObject *)self,
      (struct sidl_BaseInterface__object *)optarg->d_object,
      sidl_PyStealRef);
  }
  return -1;
}

static PyMethodDef _BaseInterfaceModuleMethods[] = {
  { NULL, NULL }
};

static PyMethodDef _BaseInterfaceObjectMethods[] = {
  { "addRef", (PyCFunction)pStub_BaseInterface_addRef,
  (METH_VARARGS | METH_KEYWORDS),
"\
addRef()\n\
RETURNS\n\
    None\n\
\n\
\
<p>\n\
Add one to the intrinsic reference count in the underlying object.\n\
Object in <code>sidl</code> have an intrinsic reference count.\n\
Objects continue to exist as long as the reference count is\n\
positive. Clients should call this method whenever they\n\
create another ongoing reference to an object or interface.\n\
</p>\n\
<p>\n\
This does not have a return value because there is no language\n\
independent type that can refer to an interface or a\n\
class.\n\
</p>"
   },
  { "deleteRef", (PyCFunction)pStub_BaseInterface_deleteRef,
  (METH_VARARGS | METH_KEYWORDS),
"\
deleteRef()\n\
RETURNS\n\
    None\n\
\n\
\
Decrease by one the intrinsic reference count in the underlying\n\
object, and delete the object if the reference is non-positive.\n\
Objects in <code>sidl</code> have an intrinsic reference count.\n\
Clients should call this method whenever they remove a\n\
reference to an object or interface."
   },
  { "getClassInfo", (PyCFunction)pStub_BaseInterface_getClassInfo,
  (METH_VARARGS | METH_KEYWORDS),
"\
getClassInfo()\n\
RETURNS\n\
   (sidl.ClassInfo _return)\n\
\n\
\
Return the meta-data about the class implementing this interface."
   },
  { "isSame", (PyCFunction)pStub_BaseInterface_isSame,
  (METH_VARARGS | METH_KEYWORDS),
"\
isSame(in sidl.BaseInterface iobj)\n\
RETURNS\n\
   (bool _return)\n\
\n\
\
Return true if and only if <code>obj</code> refers to the same\n\
object as this object."
   },
  { "isType", (PyCFunction)pStub_BaseInterface_isType,
  (METH_VARARGS | METH_KEYWORDS),
"\
isType(in string name)\n\
RETURNS\n\
   (bool _return)\n\
\n\
\
Return whether this object is an instance of the specified type.\n\
The string name must be the <code>sidl</code> type name.  This\n\
routine will return <code>true</code> if and only if a cast to\n\
the string type name would succeed."
   },
  { "queryInt", (PyCFunction)pStub_BaseInterface_queryInt,
  (METH_VARARGS | METH_KEYWORDS),
"\
queryInt(in string name)\n\
RETURNS\n\
   (sidl.BaseInterface _return)\n\
\n\
\
Check whether the object can support the specified interface or\n\
class.  If the <code>sidl</code> type name in <code>name</code>\n\
is supported, then a reference to that object is returned with the\n\
reference count incremented.  The callee will be responsible for\n\
calling <code>deleteRef</code> on the returned object.  If\n\
the specified type is not supported, then a null reference is\n\
returned."
   },
  { NULL, NULL }
};

static PyTypeObject _sidl_BaseInterfaceType = {
  PyObject_HEAD_INIT(NULL)
  0,      /* ob_size */
  "sidl.BaseInterface.BaseInterface", /* tp_name */
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
Every interface in <code>sidl</code> implicitly inherits\n\
from <code>BaseInterface</code>, and it is implemented\n\
by <code>BaseClass</code> below.", /* tp_doc */
  0,      /* tp_traverse */
  0,       /* tp_clear */
  0,       /* tp_richcompare */
  0,       /* tp_weaklistoffset */
  0,       /* tp_iter */
  0,       /* tp_iternext */
  _BaseInterfaceObjectMethods, /* tp_methods */
  0,       /* tp_members */
  0,       /* tp_getset */
  0,       /* tp_base */
  0,       /* tp_dict */
  0,       /* tp_descr_get */
  0,       /* tp_descr_set */
  0,       /* tp_dictoffset */
  sidl_BaseInterface_createCast,   /* tp_init */
  0,       /* tp_alloc */
  0,       /* tp_new */
};

sidl_BaseInterface__wrap_RETURN
sidl_BaseInterface__wrap sidl_BaseInterface__wrap_PROTO {
  PyObject *result;
  if (sidlobj) {
    result = _sidl_BaseInterfaceType.tp_new(&_sidl_BaseInterfaceType, NULL,   \
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

sidl_BaseInterface__weakRef_RETURN
sidl_BaseInterface__weakRef sidl_BaseInterface__weakRef_PROTO {
  PyObject *result;
  if (sidlobj) {
    result = _sidl_BaseInterfaceType.tp_new(&_sidl_BaseInterfaceType, NULL,   \
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

sidl_BaseInterface_deref_RETURN
sidl_BaseInterface_deref sidl_BaseInterface_deref_PROTO {
  if (sidlobj) {
    (*(sidlobj->d_epv->f_deleteRef))(sidlobj->d_object);
  }
}

sidl_BaseInterface__newRef_RETURN
sidl_BaseInterface__newRef sidl_BaseInterface__newRef_PROTO {
  PyObject *result;
  if (sidlobj) {
    result = _sidl_BaseInterfaceType.tp_new(&_sidl_BaseInterfaceType, NULL,   \
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

sidl_BaseInterface__addRef_RETURN
sidl_BaseInterface__addRef sidl_BaseInterface__addRef_PROTO {
  if (sidlobj) {
    (*(sidlobj->d_epv->f_addRef))(sidlobj->d_object);
  }
}

sidl_BaseInterface_PyType_RETURN
sidl_BaseInterface_PyType sidl_BaseInterface_PyType_PROTO {
  Py_INCREF(&_sidl_BaseInterfaceType);
  return &_sidl_BaseInterfaceType;
}

sidl_BaseInterface__convert_RETURN
sidl_BaseInterface__convert sidl_BaseInterface__convert_PROTO {
  *sidlobj = sidl_Cast(obj, "sidl.BaseInterface");
  if (*sidlobj) {
    (*((*sidlobj)->d_epv->f_addRef))((*sidlobj)->d_object);
  }
  else if (obj != Py_None) {
    PyErr_SetString(PyExc_TypeError, 
      "argument is not a(n) sidl.BaseInterface");
    return 0;
  }
  return 1;
}

static int
_convertPython(void *sidlarray, const int *ind, PyObject *pyobj)
{
  struct sidl_BaseInterface__object *sidlobj;
  if (sidl_BaseInterface__convert(pyobj, &sidlobj)) {
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

sidl_BaseInterface__convert_python_array_RETURN
sidl_BaseInterface__convert_python_array                                      \
  sidl_BaseInterface__convert_python_array_PROTO {
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
              sidl_BaseInterface__array*)sidl_interface__array_createRow
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
  struct sidl_BaseInterface__object *sidlobj = (struct                        \
    sidl_BaseInterface__object*)
  sidl_interface__array_get((struct sidl_interface__array *)
    sidlarray, ind);
  *dest = sidl_BaseInterface__wrap(sidlobj);
  return (*dest == NULL);
}

sidl_BaseInterface__convert_generic_array_RETURN
sidl_BaseInterface__convert_generic_array                                     \
  sidl_BaseInterface__convert_generic_array_PROTO {
  if (sidlarray &&
    (sidl_interface_array == sidl__array_type(sidlarray))) {
    return sidl_BaseInterface__convert_sidl_array(sidlarray);
  }
  else {
    return sidl_python_borrow_array(sidlarray);
  }
}
sidl_BaseInterface__convert_sidl_array_RETURN
sidl_BaseInterface__convert_sidl_array                                        \
  sidl_BaseInterface__convert_sidl_array_PROTO {
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
initBaseInterface(void) {
  PyObject *module, *dict, *c_api;
  static void *ExternalAPI[sidl_BaseInterface__API_NUM];
  module = Py_InitModule3("BaseInterface", _BaseInterfaceModuleMethods, "\
\
Every interface in <code>sidl</code> implicitly inherits\n\
from <code>BaseInterface</code>, and it is implemented\n\
by <code>BaseClass</code> below."
  );
  dict = PyModule_GetDict(module);
  ExternalAPI[sidl_BaseInterface__wrap_NUM] = (void*)sidl_BaseInterface__wrap;
  ExternalAPI[sidl_BaseInterface__convert_NUM] =                              \
    (void*)sidl_BaseInterface__convert;
  ExternalAPI[sidl_BaseInterface__convert_python_array_NUM] =                 \
    (void*)sidl_BaseInterface__convert_python_array;
  ExternalAPI[sidl_BaseInterface__convert_sidl_array_NUM] =                   \
    (void*)sidl_BaseInterface__convert_sidl_array;
  ExternalAPI[sidl_BaseInterface__weakRef_NUM] =                              \
    (void*)sidl_BaseInterface__weakRef;
  ExternalAPI[sidl_BaseInterface_deref_NUM] = (void*)sidl_BaseInterface_deref;
  ExternalAPI[sidl_BaseInterface__newRef_NUM] =                               \
    (void*)sidl_BaseInterface__newRef;
  ExternalAPI[sidl_BaseInterface__addRef_NUM] =                               \
    (void*)sidl_BaseInterface__addRef;
  ExternalAPI[sidl_BaseInterface_PyType_NUM] =                                \
    (void*)sidl_BaseInterface_PyType;
  ExternalAPI[sidl_BaseInterface__convert_generic_array_NUM] =                \
    (void*)sidl_BaseInterface__convert_generic_array;
  import_SIDLObjA();
  if (PyErr_Occurred()) {
    Py_FatalError("Error importing sidlObjA module.");
  }
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
  _sidl_BaseInterfaceType.tp_base = sidl_PyType();
  if (PyType_Ready(&_sidl_BaseInterfaceType) < 0) {
    PyErr_Print();
    fprintf(stderr, "PyType_Ready on sidl.BaseInterface failed.\n");
    return;
  }
  Py_INCREF(&_sidl_BaseInterfaceType);
  PyDict_SetItemString(dict, "BaseInterface",                                 \
    (PyObject *)&_sidl_BaseInterfaceType);
  sidl_ClassInfo__import();
}
