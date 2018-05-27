#!/usr/bin/python3
import unittest

class TestSumMethods(unittest.TestCase):
    '''checking summa() function'''

    def test_value(self):
        self.assertEqual(summa(4,5),9)
    
    def test_float_to_integer(self):
        self.assertEqual(summa(7.5,5),12.5)
    
    def test_string(self):
        self.assertEqual(summa("hel","lo"),"hello")


def summa(a,b):
    '''adding two numbers'''

    return a + b

if __name__ == '__main__':
   unittest.main()

