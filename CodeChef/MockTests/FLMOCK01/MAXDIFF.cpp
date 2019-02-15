#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k, sum=0, subsum = 0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<int> w(n);
        int x;
        for(int i=0; i<n; i++)
        {
            cin>>w[i];
            sum += w[i];
        }

        sort(w.begin(), w.end());
        for(int i=0; i<k; i++) subsum += w[i];

        cout<<sum - 2*subsum<<"\n";
    }
    return 0;
}