#include<iostream>
#include<vector>
using namespace std;
addedge(vector<int>ptr[],int u,int v)
{
    ptr[u-1].push_back(v-1);
    ptr[v-1].push_back(u-1);
}
DFS(int visited[],int n,vector<int>s[])
{
   visited[n]=1;
   cout<<n<<" ";
   for(auto i : s[n])
   {
    if(!visited[i])
    {
        DFS(visited,i,s);
    }
   }
}
int main()
{
   int visited[6]={0};
   vector<int>s[6];
   addedge(s,1,2);
   addedge(s,2,3);
   addedge(s,3,4);
   addedge(s,4,5);
   addedge(s,4,6);
   DFS(visited,0,s);

   
}
