/*
** author:mahmoud magdy
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

inline int D()
{
    int m ;
    cin>>m;
    return m ;
}
inline ll lD()
{
    ll m ;
    cin>>m;
    return m ;
}
inline double dD()
{
    double m;
    cin>>m;
    return m;
}
void fast()
{
    ios_base :: sync_with_stdio( 0 ) ;
    cin.tie( 0 ) ;
    cout.tie( 0 ) ;
}
int main()
{
    fast();
    int t=D();
    string s;
    getline(cin,s);
    while(t--)
    {
        getline(cin,s);
        bool f=true;
        stack<char>sk;
        for(int i=0; i<s.length(); ++i)
        {
            if(s[i]=='('||s[i]=='[')
            {
                sk.push(s[i]);
            }
            else
            {
                if(sk.empty())
                {
                    f=false;
                    break;
                }
                if(s[i]==')'&&sk.top()!='(')
                {
                    f=false;
                    break;
                }
                if(s[i]==']'&&sk.top()!='[')
                {
                    f=false;
                    break;
                }
                sk.pop();
            }

        }

            if(f&&sk.empty())
            {
                cout<<"Yes"<<endl;
            }
            else
                cout<<"No"<<endl;
     }

}
