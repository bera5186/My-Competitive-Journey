t = int(input())
flag=1
while t>0:
    n = int(input())
    a = map(int, input().split())
    a = list(a)
    for i in range(n):
        for j in range(n):
            if a[i]*a[j] in a:
                flag = 1
            else :
                flag =0
                break        
    if flag==1:
        print('yes')
    else:
        print('no')
    t = t-1        
