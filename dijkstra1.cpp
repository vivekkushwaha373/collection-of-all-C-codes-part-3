#include<bits/stdc++.h>
using namespace std;
       
int arr[5][5]=
{
		{0,4,2,5,0},
		{0,0,0,3,4},
		{3,8,0,6,0},
		{0,2,0,0,3},
		{0,0,0,0,0}
};
int Infinity=INT_MAX;
int temp=0;
int perm=1;
int n=5;
int predessesor[5];
int status[5];
int pathlength[5];
int min_temp()
{
 int min= INT_MIN;
 int element=-1;
 for(int i=0;i<n;i++)
 {
    if(status[i]==temp && pathlength[i]<Infinity)
    {
      if(min<pathlength[i])
      {
        min=pathlength[i];
        element=i;
      }
    }
}  
  return element;
}
void dijkstra(int s)
{
    int current;
    for(int i=0;i<n;i++)
    {
        predessesor[n]=-1;
        status[n]=temp;
        pathlength[n]=Infinity;
    }
    pathlength[s]=perm;
    while(1)
    {
        current=min_temp();
        status[current]=perm;
        if(current==-1)
        return ;
        else
        {
            for(int i=0;i<n;i++)
            {
              if(arr[current][i]!=0 ) 
              if(pathlength[current]+arr[current][i]<pathlength[i])
              { 
                pathlength[i]=pathlength[current]+arr[current][i];
                predessesor[i]=current;
              }
              
            }
        }
    }
}
find_path(int u,int v)
{
  int path[5];
  int count=0;
  int trace=0;
  //  cout<<v<<" ";
   while(u!=v)
   {
    path[trace]=v;
    trace++;
    temp=predessesor[v];
    count=count+arr[temp][v];
    v=temp;
    // cout<<v<<" ";
   }
  //  cout<<trace;
   path[trace]=u;

   for(int i=trace;i>=0;i--)
   {
     cout<<path[i]<<" ";  
   }
   cout<<endl;
   cout<<count;
  
   
}
int main()
{
    dijkstra(0);
    find_path(0,2);
    return 0;
}