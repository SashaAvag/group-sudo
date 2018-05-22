#!/usr/bin/python3

# 1 Exercise

tiv = input("Input number: ")
tiv = list(tiv)
print (sum(int(i) for i in tiv))

# 2 Exercise
print()
def add_tags(tag,word):
    print ('<','>', sep = tag,end = word)
    print('</','>', sep = tag)
add_tags('i','python')

# 3 Exercise
print()

def kat (num):
    gum = 0
    for i in range(1, num//2 + 1 ):
        if num % i == 0:
            gum += i
    if gum == num:
        print(num ," is ideal")
    else:
        print(num, " is not ideal")
kat(int(input("input number: ")))

# 4 Exercise
print()

lis = [2.5,6.2,1,7.9]
s = 0
for i in lis[:]:
    if i > int(i):
        i = int(i) + 1
    s += i
print ("Sum of list: ",s)


# 5 Exercise
print()

lis = [2.5,6.2,1,7.9]
s = 0
for i in lis[:]:
    i = i // 1
    s += i
print ("Sum of list: ",int(s))

# Recursion
# 6 Exercise
print()

def pol (word):
    if len(word) <= 1:
        print ("Is polyndrome")
        return 1
    else:
        if word[0] == word[-1]:
            return pol (word[1:-1])
        else:
            print("Is not polyndrome")
            return 0
pol(input("Input a word: "))

# 7 Exercise
print()

def foo (n,s=0):
    if  n < 10:
        return s+n
    s += n%10
    n = n//10
    return foo(n,s)
num = int(input("Enter number: "))
print("Tvi tvanshanneri gumar: ", foo(num))




# 8 Exercise
print()

def boo(num):
    if num <= 0:
        return 0
    else:
        return num + boo(num - 2)
print("Hajordakanutyun n+ (n-2)+ (n-4)+.. : ",boo(int(input("Input number: "))))


# 9 Exercise
print()

def hash(lis):
    if len(lis) < 1:
         return 0
    if type(lis[-1]) == type([]):
        ls = lis[-1]
        lis = lis[:-1]
        for i in ls:
            lis.append(i)
    return lis[-1] + hash(lis[:len(lis)-1])
lis = [1,2 ,[3,4],[5,6]]
print("Gumary nerdrvac cucakneri: ",hash(lis))













