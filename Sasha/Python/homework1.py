#!/usr/bin/python3.5


#Execrcise 1

for i in range(1500,2700):
    if i % 5 == 0 and i % 7 == 0:
        print (i ,"is divided to 7 and 5")

#Exercise 2
print()


lis =[0,1]
i = 1
print ("Fibonachii hajordakanutyun")
while lis[i] <= 50:
    i += 1
    lis.append( lis[i-1] + lis[i-2])
print (lis)

#Exercise 3
print ()

a = int(input("Enter number: "))
i = 1
while i <= 10:
    print(a,i,sep=" * " ,end = " = ")
    print (a * i)
    i += 1

#Exercise 4
print()

pol = input("Enter a word: ")
c = len(pol) / 2
bol = True
m = -1
n = 0
while c > 0:
    if (pol[n] == pol[m]):
        m += -1
        n += 1
    else:
        bol = False
        break
    c -= 1
if bol:
    print (pol," is polyndrome")
else:
    print (pol, " is not polyndrome")

#Exercise 5
print()

word = input("Enter a word: ")
print( word[-1] + word[1:-1:] + word[0])



