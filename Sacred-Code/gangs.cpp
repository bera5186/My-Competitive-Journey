#include <bits/stdc++.h>
using namespace std;

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int>gang(9);
    vector<int>sums(9);
    vector<int>::iterator it;

    int sum=0;
    for(int i=0;i<9;i++){
        cin>>gang[i];
        sum+=gang[i];
    }
    cout<<sum;
    for(int i=8;i>=0;i--){
        sum = sum - gang[i];
        if(sum > 100){
            sums.push_back(i);
            continue;
        }
        else if(sum < 100){
            sum = sum + gang[i];
        } else if (sum == 100){
            sums.push_back(i);
            break;
        }
    }
    for(int i=0;i<sums.size();i++){
        gang.erase(gang.begin()+sums[i]);
    }

    for(int i=0;i<gang.size();i++){
        cout<<gang[i]<<" ";
    }


}