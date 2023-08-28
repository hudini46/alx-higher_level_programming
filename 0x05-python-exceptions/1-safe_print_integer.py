#!/usr/bin/python3

def print_safely_integer(input_value):
    """Prints an integer using the format "{:d}".

    Args:
        input_value (int): The integer value to be printed.

    Returns:
        Returns True if the integer is printed successfully,
        Returns False if a TypeError or ValueError occurs during printing.
    """
    try:
        print("{:d}".format(input_value))
        return True
    except (TypeError, ValueError):
        return False
