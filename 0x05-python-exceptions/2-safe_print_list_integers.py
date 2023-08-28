#!/usr/bin/python3

def print_first_x_integers(input_list=[], limit=0):
    """Prints the first x integer elements from a list.

    Args:
        input_list (list): The list containing elements to print from.
        limit (int): The maximum number of integer elements to print.

    Returns:
        The number of integer elements successfully printed.
    """
    printed_count = 0
    for idx in range(limit):
        try:
            print("{:d}".format(input_list[idx]), end="")
            printed_count += 1
        except (ValueError, TypeError):
            continue
    print("")
    return printed_count
