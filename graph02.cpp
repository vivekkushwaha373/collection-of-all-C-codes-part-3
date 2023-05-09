// Adjacency list implementation: 
#include<iostream>
#include<vector>
using namespace std;
addedge(vector<int>adj[],int u,int v)
{
   //consider the graph is undirected:
   adj[u].push_back(v);
   adj[v].push_back(u);
}
printgraph(vector<int>adj[],int V)
{
    for(int i=0;i<V;i++)
    {
        // for(int j=0;j<adj[i].size();j++)
        // {
        //     cout<<adj[i].at(j)<<" ";
        // }
        // for(auto j=adj[i].begin();j<adj[i].end();j++)
        // cout<<*j<<" ";
      for(auto j:adj[i])
      {
        cout<<j<<" ";
      }
      cout<<endl;
    }
}
int main()
{
    vector<int>adj[4];
    int V=4;
       addedge(adj,0,1);
       addedge(adj,1,2);
       addedge(adj,2,0);
       addedge(adj,2,3);
    printgraph(adj,V);
    return 0;
}