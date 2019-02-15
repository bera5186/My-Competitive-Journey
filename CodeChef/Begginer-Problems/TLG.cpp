#include <iostream>
using namespace std;

int main(){
    int n, lead =0, temp, winner, p1, p2;
    cin>>n;
    while(n--)
    {
        
        cin>>p1>>p2;
        if(p1 > p2)
        {
            temp = p1-p2;
            if(temp > lead)
            {
                lead = temp;
                winner =1;
            }
        } 
        else
        {
            temp=  p2-p1;
            if(temp > lead)
            {
                lead = temp;
                winner = 2;
            }
        }
    }

    cout<<winner<<" "<<lead<<"\n";
    
    

    return 0;
}