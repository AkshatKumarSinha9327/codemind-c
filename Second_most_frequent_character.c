#include<stdio.h>

int hsh[26];

int main()
{
    int i=0;
    char str[1000];
    scanf("%s",str);
    for(i = 0 ; str[i] != NULL ;i++)
    {
        hsh[str[i] - 'a']++;
    }
    int mx = 0;
    for(i = 0 ; i < 26 ;i++)
    {
        if (mx<hsh[i])mx = hsh[i];
    }
    int flag =  0;
    char c;
    while (1)
    {
        mx-=1;
        if (mx==0)break;
        for( i = 0 ; i<26;i++)
        {
            if (mx==hsh[i])
            {
                flag=1;
                c = i + 'a';
                break;
            }
        }
        if(flag==1)break;
    }
    if (flag==0)
    {
        printf("-1");
    }
    else{
        printf("%c",c);
    }
}