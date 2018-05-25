#!/usr/bin/python3
import math

class Shape(object):
    def __eq__(self,other):
        return self.area() == other.area() 
    def __lt__(self,other):
        return self.circum() < other.circum()
class Rectangle(Shape):
    def __init__(self,length,width):
        self.length = length
        self.width = width
    def area(self):
        return self.length * self.width
    def circum (self):
        return 2 * (self.length + self.width)
    def __str__(self):
        return "Rectangle's circum: "+str(self.circum())+" Rectangle's area: "+str(self.area())
class Square(Rectangle):
    def __init__(self,side):
        self.side = side 
        Rectangle.__init__(self,side,side)
    def __str__(self):
        return "This is Square. The side of square is: "+ str(self.side)+" The area of this square: "+str(self.area())
class Circle(Shape):
    def __init__(self,radius):
        self.radius = radius
    def circum(self):
        return math.pi * 2 * self.radius
    def area(self):
        return math.pi * self.radius ** 2
    def __lt__(self,other):
        return self.radius < other.radius
    def __str__(self):
        return "This is Circle. "+"The diameter of circle: "+str(2*self.radius)

square1 = Square(3)
square2 = Square(4)
print(square1)
print(square2)
print("square1 > square2",square1 > square2)
rectangle1 = Rectangle(4,4)
print(rectangle1)
print("square2 == rectangle1",square2 == rectangle1)
circle1 = Circle(5)
circle2 = Circle(6)
print(circle1)
print(circle2)
print("square1 < circle1",square1 < circle1)
print("rectangle1 area:",rectangle1.area())
print("rectangle1 circum:",rectangle1.circum())
print("square1 area:",square1.area())
print("square1 circum:",square1.circum())
