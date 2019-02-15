#include <iostream>
using namespace std;

int main(){
    int x;
    float y;
    cin>>x>>y;
    if(x>y){
        printf("%.2f",y);
    }
    else {
     if(x%5 == 0){
        cout<<y-x-0.5;
     }else{
        printf("%.2f",y);
    }}
    return 0;
}