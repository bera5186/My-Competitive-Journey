#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, maxl=0;
    string s, p="";
    
    cin >> s;
    cin >> n;

    for(long long int i=0; i<n; i++)
    {
        if( s.length() >= n )
        {
            break;
        }

        p = p + s;

    }
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'a')
        {
            maxl++;
        }
    }
    cout<<maxl<<"\n";
    return 0;
}