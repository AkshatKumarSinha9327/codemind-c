#include<stdio.h>

int main()
{
    int n=0,i;
    char str[10000];
    scanf("%[^
]%*c",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if (str[i]>='0' && str[i]<='9')
        {
            n = n + str[i]-48;
        }
    }
    printf("%d",n);
    return 0;
}