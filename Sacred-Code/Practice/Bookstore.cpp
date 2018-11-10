#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>prices(n);
    int mins=n/3;
    vector<int>mini(mins);
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    
    for(int i=0;i<n;i+=3){
        mini.push_back();
    }
    /*int sum=0;
    for(int i=0;i<n;i++){
        sum += prices[i];
    }
    cout<<sum-prices[0];**/
    for(int i=0;i<n;i++){
        cout<<prices[i]<<" ";
    }
    return 0;
}