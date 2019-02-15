#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    while(!(num == 42)){
        cout<<num<<"\n";
        cin>>num;
    }
    return 0;
}