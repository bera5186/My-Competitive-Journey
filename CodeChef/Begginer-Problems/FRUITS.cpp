#include <iostream>
using namespace std;

int main(){
    int t, n, m, k, diff;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        if(n == m){
            cout<<"0"<<"\n";
        } else{
            if(m > n){
                diff = m -n;
                if(diff <= k){
                    cout<<"0"<<"\n";
                } else {
                    cout<<diff-k<<"\n";
                }
            } else{
                diff = n-m;
                if(diff <= k){
                    cout<<"0"<<'\n';
                } else {
                    cout<<diff-k<<'\n';
                }
            }
        }
    }

    return 0;
}