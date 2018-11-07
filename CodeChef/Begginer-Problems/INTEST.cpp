#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,t,count=0;
    cin>>n>>k;
    while(n--){
        cin>>t;
        if(t%k == 0){
            count = count +1;
        }
    }
    cout<<count;
    return 0;
}