#include <iostream>
using namespace std;

int main(){
    int t;
    long long int n,i,height=0, sum=0;
    
    cin>>t;
    while(t--){
        cin>>n;
        for(i=1; ; i++){
            
            sum += i;
            if(sum>n){
                break;
            }
            height = height +1;
        }
        cout<<height<<"\n";
    }
    return 0;
}