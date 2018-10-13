/*
this problem comprises of conversion of one type of spredsheet row column 
notation to another.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    int cases;
    cin>>cases;
    while(cases){
        cin>>str;
        if(isdigit(str[1])){
            cout<<"good";
        }
        cases--;
    }
    return 0;
}