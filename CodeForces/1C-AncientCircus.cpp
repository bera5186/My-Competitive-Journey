/*
This problem comprises with finding area of  a triangle given its coordinates
approach : i will use heron's formula for this
read more about this from this link https://en.wikipedia.org/wiki/Heron%27s_formula
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    float x1,y1,x2,y2,x3,y3,a,b,c;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    a = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    b = sqrt(pow(x3-x2,2) + pow(y3-y2,2));
    c = sqrt(pow(x1-x3,2) + pow(y1-y3,2));

    cout<<a<<"\n";
    cout<<b<<"\n";
    cout<<c<<"\n";

    //cout<<(float)(1/4)*sqrt((a+b+c)*(b+c-a)*(a+b-c)*(a+c-b));
    return 0;
}