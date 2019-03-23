#Project Euler 102
import csv
import math

def area(x):
    return abs((x[0] * (x[3] - x[5]) + x[2] * (x[5] - x[1])  + x[4] * (x[1] - x[3])) / 2.0)
    #return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0)

def consistOrigin(n):
    total_area=area(n)
    
    coordinate=[n[0],n[1],n[2],n[3],0,0]
    triangle1=area(coordinate)
    coordinate=[n[0],n[1],0,0,n[4],n[5]]
    triangle2=area(coordinate)
    coordinate=[0,0,n[2],n[3],n[4],n[5]]
    triangle3=area(coordinate)
    
    triangle=triangle1+triangle2+triangle3
    
    if total_area==triangle: return True
    else: return False


counter=0
with open("coordinates.txt") as file:
    csv_reader=csv.reader(file,delimiter=',')
    for line in csv_reader:
        triangle = list(map(int, line))
        if consistOrigin(triangle):
            counter+=1
            
print(counter)
        
        
