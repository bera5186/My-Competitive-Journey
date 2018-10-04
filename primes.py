"""
program to calculate primes b/w 2 numbers .
i would use seive of eratothenes

"""
import time

TESTCASES = int(input()) # number of test cases

while(TESTCASES):
    LOWER = int(input())  # lower range
    UPPER = int(input())  # upper range
    Start = time.time()
    for i in range(LOWER+1, UPPER):
        if((i != 2) and (i != 3) and (i != 5)):
            if((i % 2 != 0) and (i % 3 != 0) and (i % 5 != 0)):  # seive of eratothenes logic
                print(i)
        elif i == 2:
            print(2)
        elif i == 3:
            print(3)
        elif i == 5:
            print(5)
    End = time.time()
    print("Running time is : ",End-Start)
    TESTCASES = TESTCASES - 1 

        