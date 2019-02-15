#include <bits/stdc++.h>

using namespace std;

int power(int a, int n){
    return pow(a,n);
}

bool isPrime(int n, int k){
    
    if(n<=1 || n==4) return false;
    if(n<=3) return true;

    while(k > 0){
        int a = 2+rand()%(n-4);
        
        if(power(a,n-1) != 1){
            return false;
        }

        k--;
    }
    return true;
}
int main(){
    int k=20;

    isPrime(12, k)?  cout << " true\n": cout << " false\n"; 
    isPrime(15, k)?  cout << " true\n": cout << " false\n"; 

    return 0;

}