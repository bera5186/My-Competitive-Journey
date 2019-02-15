#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	vector<int>v(1000000);
    cin>>t;
	for(int i=0;i<t;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.begin()+t);
	for(int i=0;i<t;i++)
		cout<<v[i]<<"\n";
	return 0;
}