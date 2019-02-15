'''
this problem comprises of conversion of one type of spredsheet row column 
notation to another.

'''

location = input()

def case1(n):
    #ref = 'RC'
    n = list(n)
    col = ''
    s = ''

    for i in range(n.index('C')+1,len(n)):
        col += n[i]
    col = int(col)
    print(col)
    while col> 25:
        s += str(int(col/26))
        col = col%26
    
    print(s[::-1])

case1(location)