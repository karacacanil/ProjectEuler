#Project Euler 15

import math

grid=[20,20]

result = int(math.factorial(sum(grid))/(math.factorial(grid[0])*math.factorial(grid[1])))

print(result)
