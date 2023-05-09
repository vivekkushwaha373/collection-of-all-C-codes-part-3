#include<iostream>
#include<vector>
#include<stack>
// #include<list>
using namespace std;
// It is depth first search
DFS(int visited[],int n,vector<int>adj[])
{
    visited[n]=1;
    cout<<n<<" ";
    for(auto i : adj[n] )
    if(!visited[i])
    {
     DFS(visited,i,adj);
    }
}
// We have learnt in depth first serach we use stack
//DFS implementation through iteration:

addedge(vector<int>adj[],int u,int v)
{
//for undirected graph
adj[u].push_back(v);
adj[v].push_back(u);

}
printgraph(vector<int>adj[],int V)
{
for(int i=0;i<V;i++)
{
    for(auto j: adj[i])
    {
        cout<<j<<" ";
    }
    cout<<endl;
}
}
int main()
{
int V=7;
vector<int>adj[7];
int arr[7]={0};
addedge(adj,0,1 );
addedge(adj,0,3 );
addedge(adj,0,2 );
addedge(adj,1,4 );
addedge(adj,2,3 );
addedge(adj,2,5 );
addedge(adj,2,6 );
printgraph(adj,V);
cout<<endl;
DFS(arr,0,adj);
    return 0;
}