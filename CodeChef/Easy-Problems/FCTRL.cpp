/*
z(n) = no. of trailing zeros in n!
*/

#include <iostream>

using namespace std;
int trailing0(long int n){
    int count = 0;
    while(n>0){
        if(n%10 == 0){
            count = count +1;
        }
        n = n/10;
    }
    return count;
}

long int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int main(){
    int num, testcases;
    /*cin>>testcases;
    while(testcases--){
        cout<<testcases;
    }*/
    cout<<factorial(60);
    return 0;
}
