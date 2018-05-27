#!/usr/bin/python3

try:
    a = int(input("Enter number: "))
    b = int(input("Enter number: "))
    a = a / b
except ZeroDivisionError:
    print("Can't divide by zero:")
except ValueError:
    print("Invalid literal for int()")
except Exception as err:
   print(err)
else:
    print(a)


