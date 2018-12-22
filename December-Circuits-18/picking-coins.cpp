#include <bits/stdc++.h>
using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    long long int n, k;
    cin>>t;
    int i = 0;
    while(i < t){
        cin>>n>>k;
        long long int p = n;
        for(long long int i = 1; i <= n; i++){
            if( k == 1){
                cout<<"Bob"<<"\n";
                break;
            }
            if( n < k ){
                cout<<"Bob"<<"\n";
                break;
            }
            p = p - pow(k, i);
            if(p <= 0){
                cout<<"Bob"<<"\n";
                break;
            }

            p = p - pow(k, i);
            if(p <= 0){
                cout<<"Alice"<<"\n";
                break;
            }
        }
        i++ ;
    }
}