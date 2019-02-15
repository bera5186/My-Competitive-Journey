t = int(input())
i=0
while i<t:
    n = int(input())
    l = list(str(n))
    if len(l)>1:
        print(int(l[0])+int(l[len(l)-1]))
    else:
        print(int(l[0]))
    i=i+1     