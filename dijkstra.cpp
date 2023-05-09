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
		int INF=INT_MAX;
		int TEMP=0;
		int PERM=1;
		int NIL=-1;
		int predessesor[5];
		int status[5];
		int pathlength[5];
	int min_path()
	{
	int min=INT_MAX;
	int k=NIL;
	for(int i=0;i<5;i++)
	{
	if(min>pathlength[i] && status[i]==TEMP)
	{
		min=pathlength[i];
		k=i;
	}
	}
	return k;
	}

	void dijkstra(int s)
	{

		for(int i=0;i<5;i++)
		{
			predessesor[i]=NIL;
			status[i]=TEMP;
			pathlength[i]=INF;
		}

		pathlength[s]=0;
		int p;
		while(1)
		{
		p= min_path();
		if(p==NIL)
		return;
		status[p]=PERM;
		for(int i=0;i<5;i++)
		{
			if(arr[p][i]!=0 )
			{
				
				if(pathlength[p]+arr[p][i]<pathlength[i])
				{
					predessesor[i]=p;
					pathlength[i]=arr[p][i]+pathlength[p];
				}
			}

		}
		
		}
	}

	find_path(int s,int v)
	{
	int count=0;
	int shortdist=0;
	int path[5];
	int u;
		while(s!=v)
		{
		path[count]=v;
		count++;
		u=predessesor[v];
		shortdist=shortdist+arr[u][v];
		v=u;

		}
		path[count]=s;
		cout<<"path: ";
		for(int i=count;i>=0 ;i--)
		{
		cout<<path[i]<<" ";
		}
		cout<<endl;
		cout<<"Shortest path: "<<shortdist;
	}
	int main()
	{

	dijkstra(1);
	find_path(1,4);
		return 0;
	}