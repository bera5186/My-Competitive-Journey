#include <iostream>
#include <vector>
#define rep(i,n) for(int i=0; i<n; i++)

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, c, flag=1;
        cin>>n>>c;
        vector<int>ele(100);
        for(int i=0; i<n;i++){
            cin>>ele[i];
        }
        rep(i,n){
            if(ele[i] > c){
                flag=0;
                cout<<"NO"<<"\n";
                break;
            } else{
                flag=1;
                c -= ele[i];
            }
        }
        if(flag == 1){
            cout<<"YES"<<"\n";
        }
    }
}