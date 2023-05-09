#include<iostream>
using namespace std;
//matrix method;
int main()
{
int arr[20][20]={0};
int V,E,u,v;
cin>>V>>E;
for(int i=0;i<E;i++)
{
    cin>>u>>v;
    if(u<=V && v<=V)
    arr[u][v]=1;
    else
    {
        cout<<"Invalid Entry"<<endl;
    }
}
for(int i=0;i<V;i++)
{
    for(int j=0;j<V;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}
//demerits of matrix method;
// 1 We cannot allocate the memory dynamically;
// 2 Memory wastage