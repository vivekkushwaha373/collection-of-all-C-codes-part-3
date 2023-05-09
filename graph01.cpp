//Ajacency matrix
#include<iostream>
using namespace std;
int main()
{
int arr[20][20]={0};
int V,E,u,v,n;
cout<<"Enter the number of vertices: ";
cin>>V;
cout<<"Enter the number of edges: ";
cin>>E;
cout<<"Press '1' if the graph is directed and '0' if it is undirected: ";
cin>>n;
for(int i=0;i<E;i++)
{
    cout<<"Enter the edges: ";
    cin>>u>>v;
    arr[u][v]=1;
    if(n==0)
    arr[v][u]=1;
}
//printing the graph relation: 
for(int i=1;i<=V;i++)
{
    for(int j=1;j<=V;j++)
    cout<<arr[i][j]<<" ";
    cout<<endl;
}
return 0;
}