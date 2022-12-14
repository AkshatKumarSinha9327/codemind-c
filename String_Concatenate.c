#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    string s3 = s1 + s2;
    // cout << s3 <<endl ;
    sort(s3.begin(),s3.end());
    cout << s3;
}