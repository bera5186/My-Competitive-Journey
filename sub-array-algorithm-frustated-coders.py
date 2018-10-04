ncoders = int(input("enter no. of coders : "))
l=map(int,input().split(" "))
sl=[]
l = sorted(list(l))
top = 1

for rotator in range(1,ncoders):
    sl = l[:rotator]
    if(top != ncoders):
        if(max(sl) < l[top]):
            l[l.index(max(sl))] = 0
            top = top +1
        
            
        elif(max(sl) == l[top]):
            l[l.index(max(sl[:len(sl)-1]))] = 0
            top = top+1
    else:
        break
        
print(l)
print(sum(l))


