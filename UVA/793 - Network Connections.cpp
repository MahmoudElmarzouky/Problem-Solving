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
const int N=1e4+5;
vector<int>adj[N];
int vis[N];
void dfs(int u)
{
    //cout<<u<<"\n";
    vis[u]=1;
    for(auto i : adj[u])
    {
        if(!vis[i])
            dfs(i);
    }
}
int main()
{
    int t;
    char s[100], ss[2];
    scanf("%d", &t);
    while(t--)
    {
        int n ;
        scanf("%d", &n);
        getchar();
        int success=0,unsuccess=0;
        while(gets(s))
        {
            int x, y ;
            if(s[0] == '\0')	break;
            sscanf(s, "%s %d %d", ss, &x, &y);
            if(ss[0] == 'c')
            {
                adj[x].push_back(y);
                adj[y].push_back(x);
            }
            else
            {
                dfs(x);
                if(vis[y]==1)
                    success++;
                else
                    unsuccess++;
                memset(vis,0,sizeof vis);
            }
        }
        printf("%d,%d\n",success,unsuccess );
        if(t)puts("");
        for(int i=0; i<N; ++i)
        {
            adj[i].clear();
        }
        memset(vis,0,sizeof vis);
    }
    return 0;
}
