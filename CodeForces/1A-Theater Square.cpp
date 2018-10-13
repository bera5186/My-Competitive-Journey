/*
We have to find minimum number of flagstones to cover the square.
n:length
m:breadth
a:side of flagstone
approach : divide m by a (m/a) to get no of flagstones along breadth
           divide n by a (n/a) to get no of flagstones along length
*/
#include<bits/stdc++.h>

using namespace std;
int main(){
    int  n,m,a;
    cin>>n;
    cin>>m;
    cin>>a;
    cout<<(m+(a-1))/a * (n+(a-1))/a;
    return 0;
}