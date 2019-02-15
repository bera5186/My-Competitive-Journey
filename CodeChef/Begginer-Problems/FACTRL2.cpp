#include <iostream>
#include <vector>
using namespace std;
long long int fact(int n){
    if(n==1 || n==0){
        return 1;
    }else{
        return n*fact(n-1);
    }
}
int main(){
    int t,n;
    cin>>t;
    vector<int>a;
    
    while(t--){
        cin>>n;
        cout<<fact(n)<<"\n";
    }
    
    return 0;

}