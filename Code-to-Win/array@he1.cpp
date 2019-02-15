#include <bits/stdc++.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int s;
    while(s--){
        
        int n, r;
        cin>>n>>r;
        vector<int>ele(n);
        for(int i=0;i<n;i++){
            cin>>ele[i];
        }
        cout<<"out";
        int canSee = 1;
        for(int i=1;i<n;i++){
            cout<<"in for"<<i<<"\n";
            
            if( ele[i] > ele[0] && ele[i] > ele[i-1]){
                canSee = canSee + 1;
            }
        }
        cout<<r*canSee;
    }
    return 0;
}