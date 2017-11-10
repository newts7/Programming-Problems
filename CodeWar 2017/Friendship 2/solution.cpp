#include <bits/stdc++.h>
#define pb push_back
using namespace std;

long long n,m,total=0;
vector< vector<long long> >g(100010);
vector<bool>visited(100010);
void dfs(int u)
{
        visited[u]=true;
        total++;
        for(int i=0; i<g[u].size(); i++)
        {
                if(!visited[g[u][i]])
                        dfs(g[u][i]);
        }

}

int main()
{

        //  freopen("input.txt","r",stdin);
        //  freopen("output.txt","w",stdout);
        cin>>n>>m;
        for(int i=0; i<m; i++)
        {
                long long a,b;
                cin>>a>>b;
                g[a].pb(b);
                g[b].pb(a);
        }

        dfs(1);
        if(total==n)
                cout<<"YES";
        else
                cout<<"NO";

        return 0;
}
