#include <Python.h>

void print_list_info(PyObject *listObj)
{
    int listSize, allocatedSize, index;
    PyObject *item;

    listSize = Py_SIZE(listObj);
    allocatedSize = ((PyListObject *)listObj)->allocated;

    printf("[*] Size of the Python List = %d\n", listSize);
    printf("[*] Allocated = %d\n", allocatedSize);

    for (index = 0; index < listSize; index++)
    {
        printf("Element %d: ", index);

        item = PyList_GetItem(listObj, index);
        printf("%s\n", Py_TYPE(item)->tp_name);
    }
}
