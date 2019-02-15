#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        int mid=n/2;
        vector<int>ele(n);
        for(int i=0;i<n;i++){
            cin>>ele[i];
        }
        int sum1=0, sum2=0;
        
        if(mid%3 == 0){
            for(int i=0; i<mid;i++){
                sum1 += ele[i];
            }
            for(int i=mid+1;i<n;i++){
                sum2 += ele[i];
            }

            sum1==sum2?cout<<"rain":cout<<"no";

        }  else{
            for(int i=0; i<mid;i++){
                sum1 += ele[i];
            }
            for(int i=mid;i<n;i++){
                sum2 += ele[i];
            }
            sum1==sum2?cout<<"rain":cout<<"no";

        }

    }
    return 0;
}