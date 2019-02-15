#include <iostream>
#include <assert.h>
#include <bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	int i=0;
	while(i<t){
		vector<int>n(3);
		cin>>n[0];
		cin>>n[1];
		cin>>n[2];
		sort(n.begin(),n.end());
		cout<<n[1]<<"\n";
		i++;
	}
	return 0;
}