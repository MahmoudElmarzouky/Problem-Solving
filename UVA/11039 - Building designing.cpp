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
    while(t--)
    {
        vector<int>vR,vB;
        int n=D();
        for(int i=0; i<n; ++i)
        {
            int a=D();
            if(a<0)
            {
                vR.push_back(a*-1);
            }
            else
            {
                vB.push_back(a);
            }
        }
        int last;
        vector<int>ans;
        sort(vR.begin(),vR.end());
        sort(vB.begin(),vB.end());
        while(!vR.empty()&&!vB.empty())
        {
            if(ans.empty())
            {

                if(vR[vR.size()-1]>vB[vB.size()-1])
                {
                    last=1;
                    ans.push_back(vR[vR.size()-1]) ;
                    vR.pop_back();
                }
                else
                {
                    ans.push_back(vB[vB.size()-1]) ;
                    vB.pop_back();
                    last=2;
                }
            }
            if(last==1)
            {
                if(ans[ans.size()-1]<=vB[vB.size()-1])
                {
                    vB.pop_back();
                    continue;
                }
                last=2;
                ans.push_back(vB[vB.size()-1]) ;
                vB.pop_back();
            }
            if(last==2)
            {
                if(ans[ans.size()-1]<=vR[vR.size()-1])
                {
                    vR.pop_back();
                    continue;
                }
                last=1;
                ans.push_back(vR[vR.size()-1]) ;
                vR.pop_back();
            }
        }
        if(last==2&&!vR.empty())
        {
            if(ans[ans.size()-1]>vR[vR.size()-1])
            {
                ans.push_back(vR[vR.size()-1]);
            }
        }

        if(last==1&&!vB.empty())
        {
            if(ans[ans.size()-1]>vB[vB.size()-1])
            {
                ans.push_back(vB[vB.size()-1]);
            }
        }
        cout<<ans.size()<<endl;
    }
}
