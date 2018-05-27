#!/usr/bin/python3

try:
    list1 = [1,2,3,4,5,6,7]
    list2 = [7,6,'a',4,2,1]
    for i in range(len(list1)):
        '''Dividing  elements of list by elements second list'''
        div = list1[i] / list2[i]
        print(div)
except IndexError as ind:
    print("Out of range",ind)
except ZeroDivisionError as zer:
    print("Can't divide by zero",zer)
except TypeError as typ:
    print("unsupported operand type() for /",typ)
except:
    print("Error")

