#include<iostream>
using namespace std;
#define MAX 20
#define TEMP 0
#define PERM 1
#define INFINITY 9999
#define NIL -1

	int adj[5][5]=
	{
		{0,6,2,0,0},
		{6,0,14,9,11},
		{2,14,0,7,8},
		{0,9,7,0,0},
		{0,11,8,0,0}
	};
int predecessor[MAX];
int length[MAX];
int status[MAX];
int n=5;
int min_temp()
{

    int min=INFINITY;
    int k=NIL;
    for(int i=0;i<n;i++)
    {
        if(status[i]==TEMP && length[i]<min)
        {
            min=length[i];
            k=i;
        }
    }
    return k;
}
void display()
{
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
    if(adj[i][j]==length[j])
     cout<<i<<"->"<<j<<" "<<endl;
    }
    // cout<<endl;
}
}
void prims(int s)
{
int current;
for(int i=0;i<n;i++)
{
    predecessor[i]=NIL;
    length[i]=INFINITY;
    status[i]=TEMP;
}
length[s]=0;
while(1)
{
current=min_temp();
if(current==NIL)
return ;
status[current]=PERM;
for(int i=0;i<n;i++)
{
    if(adj[current][i]!=0&& status[i]==TEMP)
    {
           if(adj[current][i]<length[i])
           {
            predecessor[i]=current;
            length[i]=adj[current][i];
           }
    }
}
}
}

int main()
{
   prims(0);
   display();
    return 0;
}