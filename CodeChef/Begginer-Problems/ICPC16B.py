t = int(input())
flag=1
while t>0:
    n = int(input())
    a = map(int, input().split())
    a = list(a)
    for i in range(1,n):
        if a[i-1]*a[i] in a:
            flag = 1
        else :
            flag =0
            break
    if flag==1:
        print('yes')
    else:
        print('no')
    t = t-1        
