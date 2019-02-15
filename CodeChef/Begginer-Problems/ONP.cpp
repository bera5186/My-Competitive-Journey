#include <bits/stdc++.h>

using namespace std;
string bera(string s){
    stack<char>st;
    string y="";
    char a=65, z=90;
    
    for(int i=0;i<s.size();i++){
        if(s[i]>=a || s[i]<= z){
            y.push_back(s[i]);
        }
        else if(s[i]=='+'|| s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^'){
            st.push(s[i]);
        }
    }
    cout<<y;
    while(!st.empty()){
        y.push_back(st.top());
        st.pop();
        
    }
    cout<<y;
    return y;
}
int main(){
    string s;
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        string p;
        p = bera(s);
        //cout<<p<<"\n";
    }   
    return 0;
}