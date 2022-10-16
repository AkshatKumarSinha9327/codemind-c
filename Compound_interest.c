#include<stdio.h>
#include<math.h>
int main(){
    double p,r,t,u,c,ci;
    scanf("%lf %lf %lf",&p,&r,&t);
    c=r/100;
    u=1+c;
    ci=p*(pow(u,t));
    printf("%.2lf",ci);
    return 0;



}