#include<stdio.h>
#include<math.h>
int main(){
    int year,leap;
    scanf("%d",&year);
    int power = pow(10,5) ;   
    if (year>=1900 && year<=power){
        if (year%4==0 && (year%400==0 || year%100!=0)){
            leap=1;
            
        }
        else{
            leap=0;
        }
        
    }
    if (leap==1){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}