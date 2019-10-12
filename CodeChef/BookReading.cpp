#include <iostream>
using namespace std;
int main() {
    int q;
    cin>>q;
    while(q--){
        long long n,m;
        cin>>n>>m;
        int A[11];
        
        A[1]=m%10;
        for(int i=2;i<=10;i++){
            A[i]=(m*(i))%10 + A[i-1];
        }
        long long count=n/m;
        long long ans=(count/10)*A[10]+A[count%10];
        cout<<ans<<endl;

    }
}
