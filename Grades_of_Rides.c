#include<stdio.h>

int main(){
    
    int hurlf,spinf,speedf,grade;
    
    scanf("%d%d%d",&hurlf,&spinf,&speedf);
    
    if(hurlf>50 & speedf>100 && spinf>60){
        grade = 10;
    }
    else if(hurlf>50 && spinf>60){
        grade = 9;
    }
    else if(speedf>100 && spinf>60){
        grade = 8;
    }
    else if(hurlf>50 && speedf>100){
        grade = 7;
    }
    else if (hurlf>50 || speedf>100 || spinf>60){
        grade = 6;
    }
    else{
        grade = 5;
    }
    
    printf("%d",grade);
    return 0;
}