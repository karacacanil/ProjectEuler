#Project Euler 20

import math

#Also you can use this recursive function to calculate the factorial of a number
'''
def factorial(x):
    if x==1:
        return x
    else:
        return x*factorial(x-1)
''' 
num=100
p=math.factorial(num)
ans = sum([int(i) for i in str(p)])
print(ans)
