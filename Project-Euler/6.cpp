// difference between sum of sqaure and square of sum of first 100 natural numbers
#include <iostream>
#include <math.h>

using namespace std;
int main(){
    unsigned long long int suosq=0, sqosu=0;
    for(int i=0; i<=100; i++){
        suosq += pow(i,2);
        sqosu += i;
    }
    cout<<suosq<<" "<<pow(sqosu, 2);
    return 0;
}