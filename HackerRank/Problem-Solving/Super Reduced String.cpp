#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "aaabccdd";
    stack<char> rs;
    
    rs.push(s[0]);

    for(int i=1; i < s.size(); i++)
    {
        if(s[i] == rs.top()) rs.pop();
        else rs.push(s[i]);

    }
    
    //cout<<rs.top();
    
    while(!rs.empty())
    {
        cout<<rs.top()<<" ";
        rs.pop();
    }
    
    return 0;
}