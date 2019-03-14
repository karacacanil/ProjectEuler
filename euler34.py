#Project Euler 34
import time

start_time=time.time()

def factorial( n ):
   if n <1:
       return 1
   else:
       return n * factorial( n - 1 )

def isTrue(x):
    number=x
    factorial_sum=0
    length=len(str(number))
    digits=[]
    for i in range(length):
        digits.append(x%10)
        x=int(x/10)
    for j in digits:
        factorial_sum+=factorial(j)
    if factorial_sum==number: return True
    else: return False

number_sum=0
k=10
while factorial(9)*len(str(k))>k:
    if isTrue(k):
        print(k)
        number_sum+=k
    k+=1
    
print("Answer:",number_sum)
print("It took ",time.time()-start_time," seconds")   
