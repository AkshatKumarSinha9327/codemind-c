#include<stdio.h>

int main (){
    
    int n,temp,sum=0;
    scanf("%d",&n);
    temp =n;
    while(temp>0){
        sum += temp%10;
        temp/=10;
    }
    
    if (n%sum==0){
        printf("True");
    }
    else{
        printf("False");
    }
    
    return 0;
}