'''
This one is an interview question. In this problem we have to tell that weather
we can split an list(array) into identical pairs.
eg:- [1,2,2,1] can be splitted into [1,2] and [1,2]

approch:- every element have to occur even no. of time. To find distinct elements i used set data-structure
complexity-analysis:- its worst case complexity is O(n) when all the elements are distinct.
                        its best case complexity is O(1) when all elements are same.
'''

l = [1,2,4,1,4,2]
l = sorted(l)

x = list(set(l))

for i in range(len(x)):
    count = l.count(x[i])
    if count%2 != 0:
        print("no")
        break

if count%2 == 0:
    print("yes")