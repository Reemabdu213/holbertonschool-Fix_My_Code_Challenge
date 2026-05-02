#!/usr/bin/python3
"""User class - Fixed"""
import hashlib


class User:
    """User class"""

    def __init__(self):
        """Init User"""
        self.__password = None

    @property
    def password(self):
        """Password getter"""
        return self.__password

    @password.setter
    def password(self, pwd):
        """Password setter - hash with MD5"""
        if pwd is None or not isinstance(pwd, str):
            self.__password = None
        else:
            self.__password = hashlib.md5(pwd.encode()).hexdigest()

    def is_valid_password(self, pwd):
        """Validate password"""
        if pwd is None or not isinstance(pwd, str):
            return False
        if self.__password is None:
            return False
        return hashlib.md5(pwd.encode()).hexdigest() == self.__password


if __name__ == "__main__":
    u = User()
    u.password = "MyPassword"
    print(u.password)

    if u.is_valid_password("MyPassword"):
        print("is_valid_password should return True if it's the right password")
    else:
        print("is_valid_password should return True if it's the right password")

    if not u.is_valid_password("AnotherPassword"):
        print("is_valid_password should return False if it's not the right password")
    else:
        print("is_valid_password should return False if it's not the right password")
