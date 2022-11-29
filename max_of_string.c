#include<stdio.h>

int main()
{
    char str[1000];
    scanf("%[^
]%*c",str);
    
    char mx = ' ';
    for(int i = 0 ; str[i]!=NULL;i++)
    {
        if (mx < str[i])
        {
            mx = str[i];
        }
    }
    printf("%c",mx);
}