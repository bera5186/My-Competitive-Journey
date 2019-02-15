#include <bits/stdc++.h>
#include <typeinfo>

using namespace std;
int gcd(int a, int b){
    return __gcd(a,b);
}
int lcm(vector<int> &vect, int n){
    int ans = vect[0];
    for(int i=0;i<n;i++){
        ans = (((vect[i]*ans))/gcd(vect[i],ans));
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k;
    k=2.0;
    cout<<typeid(k).name();
    return 0;



    
}