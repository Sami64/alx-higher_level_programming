#!/usr/bin/python3
"""This is a say_my_name module"""


def say_my_name(first_name, last_name=""):
    """ This function prints out the first and last name"""
    if type(first_name) is not str:
        raise TypeError('first_name must be a string')
    if type(last_name) is not str:
        raise TypeError('last_name must be a string')
    print("My name is {} {}".format(first_name, last_name))
