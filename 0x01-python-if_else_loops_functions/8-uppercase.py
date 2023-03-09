#!/usr/bin/python3
def uppercase(sttr):
    for letter in sttr:
        if ord(letter) >= 97 and ord(letter) <= 122:
            print("{}".format(chr(ord(letter) - 32)), end="")
        else:
            print("{}".format(letter), end="")
