#include <stdio.h>

int main(){
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int fs=0;
        while(n>0){
            int temp;
            temp = n%10;
            if(temp == 4){
                fs++;
            }
            n=n/10;
        }
        printf("%d",fs);
    }
    return 0;
}