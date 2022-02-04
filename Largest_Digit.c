#include<stdio.h>

int main (){
    
    int n,max,check;
    scanf("%d",&n);
    max = 0;
    while(n>0){
        check = n%10;
        if (check>max){
            max = check;
        }
        
        n/=10;
    }
    printf("%d",max);
    
    return 0;
}