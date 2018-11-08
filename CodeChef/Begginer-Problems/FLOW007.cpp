#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main(){
    int t;
    cin>>t;
    int i=0;
    while(i<t){
        int n;
        cin>>n;
        int temp,rev=0;
        while(n>0){
            temp=n%10;
            rev=rev*10+temp;
            n=n/10;
        }
        cout<<rev<<"\n";
        i = i+1;

    }
    return 0;
}