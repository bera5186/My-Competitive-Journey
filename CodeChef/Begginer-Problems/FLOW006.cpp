#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	vector<int>v(1000);
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		int rem,sum=0;
		while(n>0){
			rem = n%10;
			sum = sum+rem;
			n = n/10;
		}
		v[i]=sum;
	}
	for(int i=0;i<t;i++)
		cout<<v[i]<<"\n";
	return 0;
}