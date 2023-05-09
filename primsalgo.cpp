
#include<bits/stdc++.h>
using namespace std;
#define PERM 1
#define TEMP 0
#define Infinity INT_MAX
#define MAX 20
#define NIL -1
int arr[MAX][MAX]={0};
int predessesor[MAX];
int pathlength[MAX];
int status[MAX];
int V,E;
void create_graph()
{
  int n,u,v,w;
  cout<<"Enter the number of nodes: ";
  cin>>V;
  cout<<"Press 1, if the graph is directed and 0, if the graph is undirected :";
  cin>>n;
  if(n==1)
  {
    E=(V*(V-1))/2;
  }
  else
  {
    E=V*(V-1);
  }
  for(int i=0;i<E;i++)
  {
   cin>>u>>v>>w;
   if(u==-1 && v==-1)
   break;
   else if(n==1)
   {
    if(u>V || u<0 || v>V || v<0 )
    {
    cout<<"Invalid move"<<endl;
    E--;
    }
    else
    arr[u][v]=w;
    
   }
   else
   {
     if(u>V || u<0 || v>V || v<0 )
    {
    cout<<"Invalid move"<<endl;
    E--;
    }
   else
   {
   arr[u][v]=w;
   arr[v][u]=w;
   }
   }

  }

}
int printgraph()
{
    cout<<"---------------------------------------"<<endl;
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"---------------------------------------"<<endl;
}
int min_term()
{
  int k=NIL;
  int min=INT_MAX;
  for(int i=0;i<V;i++)
  {
    if(status[i]==TEMP && pathlength[i]<min)
   { 
   
    min=pathlength[i];
    k=i;
    
   }
  }
  return k;
}

void prims(int s)
{
    for(int i=0;i<V;i++)
    {
        pathlength[i]=Infinity;
        status[i]=TEMP;
        predessesor[i]=NIL;
    }
    int current;
    pathlength[s]=0;
    while(1)
    {
        current=min_term();
        if(current==NIL)
        return ;
        status[current]=PERM;
        for(int i=0;i<V;i++)
        {
            if(arr[current][i]!=0)
            {
                // cout<<"h";
                if(arr[current][i]<pathlength[i])
               { 
                predessesor[i]=current;
                pathlength[i]=arr[current][i];
                // cout<<pathlength[i]<<" ";
               }
            }
        }
    }
}
print_pathlenth()
{
    for(int i=0;i<V;i++)
    {
        cout<<pathlength[i]<<" ";
    }
    cout<<endl;
    cout<<"-------------------------------------"<<endl;
}
void min_spanningtree()
{
for(int i=0;i<V;i++)
{
    for(int j=0;j<V;j++)
    {
    
    if(arr[i][j]!=0 && arr[i][j]==pathlength[j])
     cout<<i<<"->"<<j<<" "<<endl;
    }
    // cout<<endl;
}
}
int main()
{
create_graph();
printgraph();
prims(0);
print_pathlenth();
min_spanningtree();
return 0;
}