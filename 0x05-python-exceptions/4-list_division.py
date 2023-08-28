#!/usr/bin/python3

def divide_lists_elementwise(list_1, list_2, length):
    """Divide elements of two lists element-wise.

    Args:
        list_1 (list): The first list.
        list_2 (list): The second list.
        length (int): The number of elements to perform division on.

    Returns:
        A new list of length 'length' containing the result of element-wise divisions.
    """
    result_list = []
    for i in range(0, length):
        try:
            division_result = list_1[i] / list_2[i]
        except TypeError:
            print("Error: Wrong data type encountered.")
            division_result = 0
        except ZeroDivisionError:
            print("Error: Division by zero encountered.")
            division_result = 0
        except IndexError:
            print("Error: Index out of range.")
            division_result = 0
        finally:
            result_list.append(division_result)
    return result_list
