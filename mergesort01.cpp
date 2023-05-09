#include<iostream>
using namespace std;
void merge(int arr[],int start,int e1,int e2,int end)
{
int ptr[10];
int count=0;
int i=start;
int j=e2;
while(i<=e1 && j<=end)
{
if(arr[i]<=arr[j])
{
ptr[count++]=arr[i];
i++;
}
else if(arr[j]<arr[i])
{
    ptr[count++]=arr[j];
    j++;
}
}
    while(i<=e1)
    {
        ptr[count++]=arr[i];
        i++;
    }

   while(j<=end)
    {
        ptr[count++]=arr[j];
        j++;
    } 
    count=0;
for(int k=start;k<=end;k++)
{
    arr[k]=ptr[count];
    count++;
}
}
void mergesort(int arr[],int start,int end)
{
int mid=(start+end)/2;
if(start<end)
{
mergesort(arr,start,mid);
mergesort(arr,mid+1,end);
merge(arr,start,mid,mid+1,end);
}
}
void display(int arr[],int n)
{
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}
int main()
{
    int arr[]={4,5,7,8,1};
    int size=sizeof(arr)/sizeof(int);
    mergesort(arr,0,4);
    display(arr,5);
    return 0;
}