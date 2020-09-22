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
vector<int>adj[35];
int id,vis[30];
void dfs(int u )
{
    vis[u]=id;
    for(auto i : adj[u])
    {
        if(vis[i]!=id)dfs(i);
    }
}
int main()
{
    int t;
    char input[10];
    scanf("%d", &t);
    while(t--)
    {
        ++id;
        char c, a, b;
        cin >> c;
        int x= c-'A'+1;
        while(getchar() != '\n');
        while(gets(input)&&sscanf(input,"%c%c",&a,&b)==2)
        {
            int u, v;
            u = a-'A' +1 ;
            v = b-'A'+1;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int ans=0;
        for(int i=1; i<=x; ++i)
        {
            if(vis[i]!=id)
            {
                dfs(i);
                ans++;
            }
        }
        cout<<ans<<endl;
        if(t)
            printf("\n");
        for(int i=1; i<=30; i++)
            adj[i].clear();
    }

}
