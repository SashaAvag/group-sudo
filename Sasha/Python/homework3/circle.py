#!/usr/bin/python3
import math

class Circle(object):
    def __init__(self,radius):
        self.radius = radius
    def area(self):
        return self.radius ** 2 * math.pi
    def perimeter(self):
        return self.radius * 2 * math.pi

a = Circle(10)
print("The area of circle:",a.area())
print("The perimeter of circle:",a.perimeter())

