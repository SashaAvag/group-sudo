#!/usr/bin/python3

try:
    a = int(input("Enter number: "))
    b = int(input("Enter number: "))
except ValueError as val:
    print("Inputing number must be integer",val)
else:
        if a % 3 == 0 and b % 3 == 0:
            print("Perfect")
        else:
            raise NameError(" Inputing numbers  must be divisible by 3")
