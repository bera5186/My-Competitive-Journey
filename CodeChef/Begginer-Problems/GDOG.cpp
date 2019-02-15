#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    long int n, k, i;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(i=n; i>=k;i--){
            if(i%k == 0){
                break;
            }
        }
        cout<<n - i<<"\n";
    }

    return 0;
}