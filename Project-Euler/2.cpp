#include <iostream>
#include <math.h>

using namespace std;
#define limit 4000000;
int main(){
    
    int t1=0, t2=1, nexterm=1, sum=0;
    while(nexterm <= 4000000 ){
        
        if(nexterm%2 == 0){
            sum+=nexterm;
        }
        t1 = t2;
        t2 = nexterm;
        nexterm = t1+t2;

    }
    cout<<sum;
}