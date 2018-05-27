#!/usr/bin/python3
import unittest
import math
class TestPrimeMethods(unittest.TestCase):
    '''Test for prime function'''

    def test_negative(self):
        '''Test for negative'''

        self.assertFalse(prime(-1))

    def test_for_1(self):
        '''Test for 1 number'''

        self.assertFalse(prime(1))

    def test_prime(self):
        '''Test for prime number'''

        self.assertTrue(prime(5))
    
    def test_not_prime(self):
        '''Test for not prime number'''
        
        self.assertFalse(prime(6))

def prime(a):
    '''Checking  prime numbers'''
    if a <= 1:
        return False
    for i in (range(2,int(math.sqrt(a))+1)):
        if a % i == 0:
            return False
    return True

if __name__ == '__main__':
    unittest.main()
