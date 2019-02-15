#include <bits/stdc++.h>

using namespace std;
int main(){
    long int t;
    vector<long int> vals(100000);
    long int n, x;

    cin>>t;
    while(t--){
        cin>> n;
        for(int i=0;i<n; i++)
        cin>>x;
        vals.push_back(x);
    }
    sort(vals.begin(), vals+n);

}