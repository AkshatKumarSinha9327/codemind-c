#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r,l,u,d;
    r = -1;
    l = 1;
    u = 1;
    d = -1;
    string str;
    cin >> str;
    int x = 0,y=0;
    for(int i = 0  ; i < str.size() ;i++)
    {
        if (str[i]=='U')x+=u;
        else if (str[i]=='R')y+=r;
        else if(str[i]=='D')x+=d;
        else if(str[i]=='L')y+=l;
    }
    if (x==0&&y==0)cout<<"True";
    else cout<<"False";
}