/*Write a program to find the area of triangle, you will be given three sides length A,B and C.
your task is find the area of the area of the triangle.*/

#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,area,semi_peri;
    scanf("%f%f%f",&a,&b,&c);
    
    
    // heron's formula 
    // s = (a+b+c)/2
    //Area = √[s(s-a)(s-b)(s-c)]
    
    semi_peri = (a+b+c)/2;
    
    area = sqrt(semi_peri*(semi_peri-a)*(semi_peri-b)*(semi_peri-c)) ;
    printf("%.2f",area);
    return 0;
}