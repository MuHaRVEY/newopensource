import random

def generate_random_string(length, uppercase, lowercase, digits):
    """Generates a random string with given parameters.

    Args:
        length (int): Length of the string to be generated.
        uppercase (bool): Whether to include uppercase letters or not.
        lowercase (bool): Whether to include lowercase letters or not.
        digits (bool): Whether to include digits or not.

    Returns:
        str: A random string of given length and parameters.
    """

    chars = ""
    if uppercase:
        chars += "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    if lowercase:
        chars += "abcdefghijklmnopqrstuvwxyz"
    if digits:
        chars += "0123456789"

    if not chars:
        raise ValueError("At least one of uppercase, lowercase, or digits must be True.")

    return "".join(random.choices(chars, k=length))
