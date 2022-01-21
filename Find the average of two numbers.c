#include<stdio.h>

main(){
    float n,m,avg;
    scanf("%f%f",&n,&m);
    if (1<=n && n<=1000 && 1<=m && m<=1000){
        avg = (n+m)/2;
        printf("%.4f",avg);
    }
}