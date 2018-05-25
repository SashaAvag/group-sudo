#!/usr/bin/python3
import math
class Polynomial(object):
    def __init__(self,a,b,c):
        self.a = a
        self.b = b
        self.c = c
    def __str__(self):
        return str(self.a)+"x^2 + "+str(self.b)+"x + "+str(self.c)
    def zeros(self):
        D = self.b ** 2 - (4 * self.a * self.c)
        if D < 0:
            print("this polynomial has no roots!")
        elif D == 0:
            x = -self.b/ (2 * self.a)
            print("x=",x)
        elif D > 0:
            x1 = (-self.b + math.sqrt(D))/ (2 * self.a)
            x2 = (-self.b - math.sqrt(D))/ (2 * self.a)
            print("x1=",x1,"x2=",x2)
    def count(self,x):
        return self.a * x**2 + self.b * x + self.c
    def __add__(self,other):
        a = self.a + other.a
        b = self.b + other.b
        c = self.c + other.c
        return Polynomial(a,b,c)
    def __sub__(self,other):
        a = self.a - other.a
        b = self.b - other.b
        c = self.c - other.c
        return Polynomial(a,b,c)
    def __mul__(self,other):
        a = str(self.a * other.a)
        b = str(self.a * other.b + self.b * other.a)
        c = str(self.a * other.c + self.b * other.b + self.c * other.a)
        d = str(self.b * other.c + self.c * other.b)
        e = str(self.c * other.c)
        return str(a)+"x^4 + "+str(b)+"x^3 + "+ str(Polynomial(c,d,e))

pol = Polynomial(2,5,2)
pol1 = Polynomial(5,2,5)
print(pol)
pol.zeros()
print("count polymnomial with argument:",pol.count(2))
print("sum of two polynomial:", pol + pol1)
print("sub of two polynomial:", pol - pol1)
print("mul of two polynomial:", pol * pol1)
