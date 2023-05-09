#include<iostream>
using namespace std;
swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void heapify(int arr[],int i,int n)
{
int l=i;
int left=2*i+1;
int right=2*i+2;
if(left<n && arr[l]<arr[left])
{
// swap(&arr[i],&arr[left]);
l=left;
}
if(right<n && arr[l]<arr[right])
{
    // swap(&arr[i],&arr[right]);
    // if(arr[l]<arr[right])
    l=right;
}
if(l!=i)
{
    swap(&arr[l],&arr[i]);
    heapify(arr,l,n);
}
}

void display(int arr[],int n)
{
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}

heapsort(int arr[],int n)
{
//heapifying the given array;
for(int i=((n/2)-1);i>=0;i--)
{
 heapify(arr,i,n);
}

for(int i=n-1;i>=0;i--)
{
    swap(&arr[0],&arr[i]);
    heapify(arr,0,i);
}
}
int main()
{ 
   int arr[]={1,12,9,5,6,10};
   int n=sizeof(arr)/sizeof(int);
    heapsort(arr,n);
    display(arr,n);
   return 0;
}