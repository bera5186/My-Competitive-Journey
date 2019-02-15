#include <bits/stdc++.h>

int main(){
    std::vector<long long int>a(5000);
    int t, n;
    std::cin>>t;
    while(t--){
        std::cin>>n;
        for(int i=0;i<n;i++){
            std::cin>>a[i];
        }
                
        std::sort(a.begin(), a.begin()+n);
        std::cout<<a[1]-a[0];
        
    }
    return 0;
}
