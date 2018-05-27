#!/usr/bin/python3

try:
    '''Converting to number'''
    a =input("Enter number: ")
    a = int(a)
except ValueError as val:
    print("Could not convert to a number.",val)
