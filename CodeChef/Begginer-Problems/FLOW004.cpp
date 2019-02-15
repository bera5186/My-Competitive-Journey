#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[100];
    int t;
    while(cin>>t)
    {
        for(int i=0;i<t;i++)
        {
            cin>>a;
            int n=(a[0]-'0')+(a[strlen(a)-1]-'0');
            cout<<n<<'\n';
            cout<<a[0]-'0'<<'\n';
            cout<<a[strlen(a)-1]-'0';

        }
    }
    return 0;
}

