#!/usr/bin/python3

class Rectangle(object):
    def __init__(self,latitude,longitude):
        self.latitude = latitude
        self.longitude = longitude
    def area(self):
        return self.latitude * self.longitude
    def perimeter(self):
        return 2*(self.latitude + self.longitude)

a = Rectangle(4,5)
print("The area of Rectangle:",a.area())
print("The perimetr of rectangle:",a.perimeter())

