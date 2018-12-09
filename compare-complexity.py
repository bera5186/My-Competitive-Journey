import math
import numpy as np
import matplotlib.pyplot as plt


def fact(n):
    if n==1:
        return 1
    else:
        return n*fact(n-1)
# Calculation for O(n)
base_values = [i for i in range(1,15)]
On = base_values

O_logn=[]
for i in range(len(base_values)):
    temp = base_values[i]
    O_logn.append(math.log10(temp))

O_nlogn =[]
for i in range(len(base_values)):
    O_nlogn.append(base_values[i] * O_logn[i])

O1 = np.ones((14,),int)
O1 = list(O1)

On2 = [i**2 for i in base_values]

O2n = [2**i for i in base_values]

Oen = [pow(math.e,i) for i in base_values]

Ofn = [fact(i) for i in base_values]

plt.plot(base_values,O1,label='O(1)')
plt.plot(base_values,O_logn,'r',label='O(logn)')
plt.plot(base_values,On,label='O(n)')
plt.plot(base_values,O_nlogn,'g',label='O(n logn)')
plt.plot(base_values,On2,'c',label='O(n^2)')
plt.plot(base_values,O2n,'y',label='O(2^n)')
plt.plot(base_values,Oen,label='O(e^n)')
plt.plot(base_values,Ofn,label='O(n!)')

plt.xlabel('Values')
plt.ylabel('Running Time Complexity')
plt.title('Complexity Analysis')
plt.grid()
plt.legend()
plt.show()
