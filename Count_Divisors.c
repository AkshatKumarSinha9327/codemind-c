#include<stdio.h>
int main(){
    int l,r,k,i;
    scanf("%d%d%d",&l,&r,&k);
    int count=0;
    for (i=l;i<=r;i++){
        if (i%k==0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}