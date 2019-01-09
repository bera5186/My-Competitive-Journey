#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, temp, sum=0;
    cin>>size;

    map<int, int> p;
    for(int i=0; i<size; i++)
    {
        cin>>temp;
        p[temp]++;
    }
    map<int, int>::iterator it;
    for(it = p.begin(); it != p.end(); it++)
    {
        sum += (int)(it->second/2);
    }
    cout<<sum;
    cout<<"\n";
    return 0;
}