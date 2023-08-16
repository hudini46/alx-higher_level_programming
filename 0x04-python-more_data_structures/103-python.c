#include <stdio.h>
#include <Python.h>

void print_bytes_info(PyObject *pyObj) {
    char *data;
    long int size, i, limit;

    printf("[.] bytes object info\n");
    if (!PyBytes_Check(pyObj)) {
        printf("  [ERROR] Invalid Bytes Object\n");
        return;
    }

    size = ((PyVarObject *)(pyObj))->ob_size;
    data = ((PyBytesObject *)pyObj)->ob_sval;

    printf("  size: %ld\n", size);
    printf("  trying string: %s\n", data);

    if (size >= 10)
        limit = 10;
    else
        limit = size + 1;

    printf("  first %ld bytes:", limit);

    for (i = 0; i < limit; i++) {
        if (data[i] >= 0)
            printf(" %02x", data[i]);
        else
            printf(" %02x", 256 + data[i]);
    }

    printf("\n");
}

void print_list_info(PyObject *pyObj) {
    long int size, i;
    PyListObject *pyList;
    PyObject *item;

    size = ((PyVarObject *)(pyObj))->ob_size;
    pyList = (PyListObject *)pyObj;

    printf("[*] Python list info\n");
    printf("[*] Size of the Python List = %ld\n", size);
    printf("[*] Allocated = %ld\n", pyList->allocated);

    for (i = 0; i < size; i++) {
        item = ((PyListObject *)pyObj)->ob_item[i];
        printf("Element %ld: %s\n", i, ((item)->ob_type)->tp_name);
        if (PyBytes_Check(item))
            print_bytes_info(item);
    }
}
