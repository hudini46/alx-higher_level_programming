#!/usr/bin/python3

def print_partial_list(input_list=[], limit=0):
    """Print a specified number of elements from a list.

    Args:
        input_list (list): The list containing elements to print from.
        limit (int): The maximum number of elements to print from the list.

    Returns:
        The number of elements successfully printed.
    """
    printed_count = 0
    for idx in range(limit):
        try:
            print("{}".format(input_list[idx]), end="")
            printed_count += 1
        except IndexError:
            break
    print("")
    return printed_count
