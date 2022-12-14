#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> v;
    int ini = 0;
    
    for(int i = 0 ; i < s.size();i++)
    {
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i] == 'o' or s[i]=='u')
        {
            if (i==0)
            {
                v.push_back(1);
            }
            else{
                if(v[v.size()-1]!=1)v.push_back(1);
            }
        }
        else{
            if (i==0)
            {
                v.push_back(0);
            }
            else{
                if (v[v.size()-1]!=0)v.push_back(0);
            }
        }
    }
    for(int i = 0 ; i < v.size();i++)
    {
        if(v[i]==1)cout<<"V";
        else cout<<"C";
    }
}