#include<stdio.h>

int main(){
    
    int l,t,r,i,j,count;
    
    scanf("%d",&t);
    
    for(i=0;i<t;i++){
        scanf("%d%d",&l,&r);
        count=0;
        for(j=l;j<=r;j++){
            if (j%10==2 || j%10==3 || j%10==9){
                count++;
            }
        }
        printf("%d
",count);
    }
    
    
    return 0;
}