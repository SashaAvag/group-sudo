#!/usr/bin/python3

class Person(object):
    def __init__(self,first,last,age):
        self.first = first
        self.last = last
        self.age = age
    def __str__(self):
        return "First name: "+str(self.first)+" Last name: "+str(self.last)+" Age: "+str(self.age)
class Employee(Person):
    def __init__(self,first,last,age,stuffnum):
        Person.__init__(self,first,last,age)
        self.stuffnum = stuffnum
    def __str__(self):
        return "First name: "+str(self.first)+" Last name: "+str(self.last)+" Age: "+str(self.age)+" Stuff: "+str(self.stuffnum)
x = Person("Marge","Simpson",36)
y = Employee("Homer","Simpson",28,"engineer")
print(x)
print(y)
