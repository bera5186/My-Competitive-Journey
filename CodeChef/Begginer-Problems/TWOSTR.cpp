#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1, s2;
        int flag=0;
        cin>>s1>>s2;
        for(int i=0; i<s1.length();i++){
            if(s1[i] != s2[i] && s1[i] != '?' && s2[i] != '?'){
                
                    flag = 1;
            }

        }
        if(flag == 1){
            cout<<"No"<<"\n";
        } else {
            cout<<"Yes"<<"\n";
        }

    }
    return 0;
}