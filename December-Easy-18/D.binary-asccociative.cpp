#include <bits/stdc++.h>

using namespace std;
int main(){
    int t, c0, c1, c2, c3;
    cin>>t;

    while(t--){
        cin>>c0>>c1>>c2>>c3;
        if(c0 == 0 && c1 == 1 && c2 == 1 && c3 == 0){
            cout<<"\n"<<"Yes";
        } else {
            cout<<"\n"<<"No";
        }
    }
    return 0;
}