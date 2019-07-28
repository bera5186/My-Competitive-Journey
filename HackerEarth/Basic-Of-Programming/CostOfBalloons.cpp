#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t, cg, cp, np, pa[10][2] = {0}, minC, sg=0, sp=0;
    cin >> t;
    cin >>  cg >> cp ;
    cin >> np ;
    for(int i = 0; i < np; i++)
    {
        for(int j = 0;j < 2; j++)
        {
            cin >> pa[i][j] ;
            if(j == 0) sg = sg + pa[i][j] ;
            else sp = sp + pa[i][j] ;

        }
    }

    cout << sg*cg + sp*cp;
    return 0;
}