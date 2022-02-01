#include<stdio.h>

int main(){
    
    int l,b,d,c,sarea;
    scanf("%d%d%d%d",&l,&b,&d,&c);
    
    if( ( l > (2*d) ) && ( b > (2*d) ) ){
        sarea = (l-(2*d))*(b-(2*d));
        if (sarea>=0){
            printf("%d",((l*b)-sarea)*c);
        }
        else{
            printf("Impossible");
        }
        
    }
    else{
        printf("Impossible");
    }
    
    return 0;
}