#Project Euler 14

import time as t

start = t.time()

def sequence(num,chain=0):
    while num>1:
        if num%2==0:
            num = num/2
        else:
            num = 3*num+1
        chain+=1
    return chain

result = [0,0]

for eachN in range(1000000):
    n=sequence(eachN)
    if n>result[0]:
        result[0]=n
        result[1]=eachN

elapsed=(t.time()-start)

print('Number:%d,Chain:%d,Time:%d'%(result[1],result[0],elapsed))
