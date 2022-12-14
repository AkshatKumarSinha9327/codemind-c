#include<bits/stdc++.h>
using namespace std;

long long  convert(string s)
{
    long long  num = 0;
    for(int i = 0 ; i < s.size() ;i++)
    {
        num = num *10 + (s[i]- 48);
    }
    return num;
}

int main()
{
    string s,ss;
    cin >> s >> ss;
    long a = convert(s);
    long b = convert(ss);
    cout<<a*b;
}