#!/usr/bin/python3.5
class Complex(object):
    def __init__(self,a,b):
        self.a = a
        self.b = b
    def __str__(self):
        if self.a == 0 and self.b == 0:
            return '0'
        if self.a == 0:
            return '('+str(self.b)+'i)'
        if self.b == 0:
            return '('+str(self.a)+')'
        return '('+str(self.a)+'+'+str(self.b)+'i)'
    def __add__(self,other):
        x = self.a + other.a
        y = self.b + other.b
        return Complex(x,y)
    def __sub__(self,other):
        x = self.a - other.a
        y = self.b - other.b
        return Complex(x,y)
    def __mul__(self,other):
        x = self.a * other.a - self.b * other.b
        y = self.b * other.a + self.a * other.b
        return Complex(x,y)
    def __truediv__(self,other):
        x = (self.a * other.a + self.b * other.b)/(other.a**2 + other.b**2)
        y = (self.b * other.a - self.a * other.b)/(other.a**2 + other.b**2)
        return Complex(x,y)
    def __iadd__(self,other):
        self.a += other.a
        self.b += other.b
        return Complex(self.a,self.b)
    def __isub__(self,other):
        self.a -= other.a
        self.b -= other.b
        return Complex(self.a,self.b)
    def __imul__(self,other):
        self.a *= other.a
        self.b *= other.b
        return Complex(self.a,self.b)
    def __itruediv__(self,other):
        self.a /= other.a
        self.b /= other.b
        return Complex(self.a,self.b)
    def __invert__(self):
        return Complex(self.a/(self.a**2+self.b**2),-(self.b/(self.a**2+self.b**2)))
    def __gt__(self,other):
        if self.a > other.a:
            return True
        if self.a == other.a:
            if self.b > other.b:
                return True
        return False
    def __lt__(self,other):
        if self.a < other.a:
            return True
        if self.a == other.a:
            if self.b < other.b:
                return True
        return False
    def __ge__(self,other):
        if self.a > other.a:
            return True
        if self.a == other.a:
            if self.b > other.b:
                return True
        return False
    def __le__(self,other):
        if self.a < other.a:
            return True
        if self.a == other.a:
            if self.b <= other.b:
                return True
        return False
    def __ne__(self,other):
        return self.a != other.a or self.b != other.b


a = Complex(5,4)
b = Complex(5,6)
a += b
a -= b
a *= b
a /= b
print(a)
print(~a)
print("a>b",a > b)
print("a>=b",a >= b)
print("a<b",a < b)
print("a<=b",a <= b)
print("a!=b",a != b)
