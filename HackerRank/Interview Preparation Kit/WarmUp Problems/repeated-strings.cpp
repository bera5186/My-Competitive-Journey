#include <bits/stdc++.h>
using namespace std;

/*int main()
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
}*/

int main()
{
    long long int n, sum=0, i = 0;
    string s, p = "" ;
    map<char, int> m;

    cin >> s;
    scanf("%lld", &n);

    while( !(p.length() >= n) )
    {
        p.append(s);
    }
    //cout<< "String Before Sorting : " << p << endl;
    //sort(p.begin(), p.end());
    //cout<< "String After Sorting : " << p << endl;
    
    string::iterator it = p.begin();
    for(it; it != p.begin()+n; it++){
        cout<<*it<<" ";
        m[*it]++;
        
    }
    /*for(char x : p)
    {
        if( i == n )
        {
            break;
        }
        if( x == 'a' )
        {
            sum++ ;
            
        }
        else
        {
            break ;
        }
        i ++ ;
    }
    
    cout << sum << " \n" ;*/
    
    cout<<m['a']<<endl;
    return 0;

}