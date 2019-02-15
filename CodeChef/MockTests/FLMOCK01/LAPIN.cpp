#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int t;
    unordered_map<char, int> f1, f2;

    cin>>t;
    while(t--){
        cin>>s;
        int len = s.length();
        string s1 = s.substr(0, len/2);
        string s2 = s.substr((len+1)/2);
        for(char x = 97; x<= 122; x++)
        {
            f1[x] = 0;
            f2[x] = 0;
        }
        for(auto x : s1) f1[x]++;
        for(auto x : s2) f2[x]++;

        int flag=0;
        for(char x = 'a'; x < 'z'; x++)
        {
            if(f1[x] != f2[x])
            {
                cout<<"NO";
                flag=1;
                break;
            }
            
        }
        if(flag == 0) cout<<"Yes";
    
        

    }
    
    return 0;
}