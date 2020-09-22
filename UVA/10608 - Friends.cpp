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
const int N=1e5+5;
int dx[5]= {0,1,0,-1,0};
int dy[5]= {1,0,-1,0,1};
/*bool valid(int x,int y)
{
    return (x>=0&&x<n&&y>=0&&y<m);
}*/
vector<int>adj[N];
int  n, m,combs;
int vid;
int vis[N];
void dfs(int u)
{
    vis[u]=1;
    combs++;
    for(auto i:adj[u])
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
}
int main()
{
    int t=D();
    while(t--)
    {
        int ans=0;
        n=D(),m=D();

        memset(vis,0,sizeof vis);
        for(int i=0; i<m; ++i)
        {
            int u =D(),v=D();
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(int i=1; i<=n; ++i)
        {
            combs=0;
            if(vis[i])
                continue;
            dfs(i);
            ans=max(ans,combs);
        }
        cout<<ans<<endl;
        for(int i=1; i<=N; ++i)
            adj[i].clear();
    }
}
