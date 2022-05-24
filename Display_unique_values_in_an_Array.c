#include<stdio.h>

int main(){
    
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    int res[n],c=0;
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int flag=1,k=0;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if (i==j){
                continue;
            }
            else if(arr[i]==arr[j]){
                flag=0;
                break;
            }
            else{
                flag=1;
            }
        }
        if (flag==1){
            res[k]=arr[i];
            k++;
            c++;
        }
    }
    if (c==0){
        printf("-1");
    }
    else{
        for (i=0;i<c;i++){
            printf("%d ",res[i]);
        }
    }
    return 0;
}