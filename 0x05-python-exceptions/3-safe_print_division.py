#!/usr/bin/python3

def safely_compute_division(numerator, denominator):
    """Compute the division of the numerator by the denominator.

    Args:
        numerator (float or int): The number to be divided.
        denominator (float or int): The number to divide by.

    Returns:
        The division result if computation is successful, otherwise None.
    """
    try:
        division_result = numerator / denominator
    except (TypeError, ZeroDivisionError):
        division_result = None
    finally:
        print("Result inside: {}".format(division_result))
    return division_result
