import math
import numpy as np
import matplotlib.pyplot as plt

# Calculation for O(n)
base_values = [i for i in range(1,50)]
On = base_values

O_logn=[]
for i in range(len(base_values)):
    temp = base_values[i]
    O_logn.append(math.log10(temp))

O_nlogn =[]
for i in range(len(base_values)):
    O_nlogn.append(base_values[i] * O_logn[i])

O1 = np.ones((49,),int)
O1 = list(O1)

plt.plot(base_values,O1,label='O(1)')
plt.plot(base_values,O_logn,'r',label='O(logn)')
plt.plot(base_values,On,label='O(n)')
plt.plot(base_values,O_nlogn,'g',label='O(n logn)')

plt.grid()
plt.legend()
plt.show()
