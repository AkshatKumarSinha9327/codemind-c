#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1,s2;
        cin >> s1;
        s2 = s1;
        reverse(s2.begin(),s2.end());
        if (s1==s2)
        {
            if (s2.size()%2==0)
            cout << "YES EVEN"<< endl;
            else
            cout<< "YES ODD" <<endl;
        }
        else{
            cout << "NO" <<endl;
        }
    }
}