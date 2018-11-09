#include <iostream>

using namespace std;
int c[]={1,2,5,10,100,500};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i, count=0;
        for(i=5;i>=0;i--){
            if(c[i]<=n && n!=0){
                count+=(int)(n/c[i]);
                n=n%c[i];
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}