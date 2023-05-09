#include<iostream>
#include<vector>
#include<queue>

using namespace std;
addedge(vector<int>ptr[],int u,int v)
{
    ptr[u-1].push_back(v-1);
    ptr[v-1].push_back(u-1);
}
BFS(vector<int>s[],int n,int visited[])
{
    int temp;
    queue<int >q;
    q.push(n);
   
    while(!q.empty())
    {
      temp=q.front();
      cout<<q.front()<<" ";
      q.pop();
      visited[temp]=1;
      for(auto i: s[temp]) 
      {
        if(visited[i]!=1)
        q.push(i);
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
   BFS(s,1,visited); 
   
}
