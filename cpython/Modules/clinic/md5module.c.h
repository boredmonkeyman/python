/*[clinic input]
preserve
[clinic start generated code]*/

PyDoc_STRVAR(MD5Type_copy__doc__,
"copy($self, /)\n"
"--\n"
"\n"
"Return a copy of the hash object.");

#define MD5TYPE_COPY_METHODDEF    \
    {"copy", (PyCFunction)MD5Type_copy, METH_NOARGS, MD5Type_copy__doc__},

static PyObject *
MD5Type_copy_impl(MD5object *self);

static PyObject *
MD5Type_copy(MD5object *self, PyObject *Py_UNUSED(ignored))
{
    return MD5Type_copy_impl(self);
}

PyDoc_STRVAR(MD5Type_digest__doc__,
"digest($self, /)\n"
"--\n"
"\n"
"Return the digest value as a string of binary data.");

#define MD5TYPE_DIGEST_METHODDEF    \
    {"digest", (PyCFunction)MD5Type_digest, METH_NOARGS, MD5Type_digest__doc__},

static PyObject *
MD5Type_digest_impl(MD5object *self);

static PyObject *
MD5Type_digest(MD5object *self, PyObject *Py_UNUSED(ignored))
{
    return MD5Type_digest_impl(self);
}

PyDoc_STRVAR(MD5Type_hexdigest__doc__,
"hexdigest($self, /)\n"
"--\n"
"\n"
"Return the digest value as a string of hexadecimal digits.");

#define MD5TYPE_HEXDIGEST_METHODDEF    \
    {"hexdigest", (PyCFunction)MD5Type_hexdigest, METH_NOARGS, MD5Type_hexdigest__doc__},

static PyObject *
MD5Type_hexdigest_impl(MD5object *self);

static PyObject *
MD5Type_hexdigest(MD5object *self, PyObject *Py_UNUSED(ignored))
{
    return MD5Type_hexdigest_impl(self);
}

PyDoc_STRVAR(MD5Type_update__doc__,
"update($self, obj, /)\n"
"--\n"
"\n"
"Update this hash object\'s state with the provided string.");

#define MD5TYPE_UPDATE_METHODDEF    \
    {"update", (PyCFunction)MD5Type_update, METH_O, MD5Type_update__doc__},

PyDoc_STRVAR(_md5_md5__doc__,
"md5($module, /, string=b\'\')\n"
"--\n"
"\n"
"Return a new MD5 hash object; optionally initialized with a string.");

#define _MD5_MD5_METHODDEF    \
    {"md5", (PyCFunction)_md5_md5, METH_VARARGS|METH_KEYWORDS, _md5_md5__doc__},

static PyObject *
_md5_md5_impl(PyModuleDef *module, PyObject *string);

static PyObject *
_md5_md5(PyModuleDef *module, PyObject *args, PyObject *kwargs)
{
    PyObject *return_value = NULL;
    static char *_keywords[] = {"string", NULL};
    PyObject *string = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,
        "|O:md5", _keywords,
        &string))
        goto exit;
    return_value = _md5_md5_impl(module, string);

exit:
    return return_value;
}
/*[clinic end generated code: output=f72618edfd35d984 input=a9049054013a1b77]*/
