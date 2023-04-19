import random

def generate_random_string(length: int, uppercase: bool, lowercase: bool, digits: bool) -> str:
    """주어진 매개변수에 따라 랜덤한 문자열을 생성합니다.

    Args:
        length (int): 생성할 문자열의 길이.
        uppercase (bool): 대문자를 포함할지 여부.
        lowercase (bool): 소문자를 포함할지 여부.
        digits (bool): 숫자를 포함할지 여부.

    Raises:
        ValueError: uppercase, lowercase, digits 중 하나 이상이 True여야 합니다.

    Returns:
        str: 주어진 길이와 매개변수에 따라 생성된 랜덤 문자열.
    """

    chars = ""
    if uppercase:
        chars += "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    if lowercase:
        chars += "abcdefghijklmnopqrstuvwxyz"
    if digits:
        chars += "0123456789"

    if not chars:
        raise ValueError("대문자, 소문자, 숫자 중 하나 이상이 True여야 합니다.")

    return "".join(random.choices(chars, k=length))
