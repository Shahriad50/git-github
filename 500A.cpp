#include<bits/stdc++.h>


using namespace std;
const int mx=30005;
bool vis[mx];
vector<int>adj[mx];

void dfs(int u)
{
    vis[u]=1;
    //cout<<u<<' ';
    for(auto v:adj[u])
    {

        if(vis[v]==0){
            dfs(v);
        }
    }
    return;
}
int main()
{


    int n,m;
    cin>>n>>m;
    int a[n-1];


    //Run a loop for edges

    for(int i=1; i<n; i++)
    {
        cin>>a[i];

        adj[i].push_back(i+a[i]);
       // adj[i+a[i]][i]=1;

        //making cnnection with node
    }
    dfs(1);
    if(vis[m])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

