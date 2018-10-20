#Project Euler 16

import math

def digit_sum(num):
    str_num=str(num)
    result=0
    for digit in str_num:
        result+=int(digit)
    return result

print(digit_sum(pow(2,1000)))
