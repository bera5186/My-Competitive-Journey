l = map(int, input().split( ))
l= list(l)
x = sum(l)
p=[]

for i in range(len(l)-1,-1,-1):
    x = x - l[i]
    if x>100:
        p.append(l[i])
        pass
    elif x<100:
        x = x+ l[i]
    elif x==100:
        p.append(l[i])
        break
for i in range(len(l)):
    if l[i] not in p:
        print(l[i])
