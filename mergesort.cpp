#include<iostream>
using namespace std;
merge(int *arr,int i,int e1,int j,int e2)
{
int ptr[50]={0};
int k=0;int a=i,b=j;
while(a<=e1 && b<=e2 )
{
if(arr[a]<=arr[b])
{
    // cout<<"h";
    ptr[k]=arr[a];
    k++;a++;
}
if(arr[a]>arr[b])
{
    // cout<<"i";
    ptr[k]=arr[b];
    k++;b++;
}

}
while(a<=e1)
{
ptr[k]=arr[a];
k++;a++;
}
while(b<=e2)
{
ptr[k]=arr[b];
k++;b++;
}
for(int x=i,k=0;x<=e2;k++,x++)
arr[x]=ptr[k];
//i-->e1// j-->e2;
}
mergesort(int*arr,int i,int j)
{
    int mid=(i+j)/2;
    if(i<j)
    {
    mergesort(arr,i,mid);
    mergesort(arr,mid+1,j);
    merge(arr,i,mid,mid+1,j);
    }

}
display(int*ptr,int size)
{
for(int i=0;i<size;i++)
{
    cout<<ptr[i]<<" ";
}
cout<<endl;
}
int main()
{
    int arr[10]={1,4,5,2,6,10,3,8,7,9};
    mergesort(arr,0,9);
    display(arr,10);
    return 0;
}