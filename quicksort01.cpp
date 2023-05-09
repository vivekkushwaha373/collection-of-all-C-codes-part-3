#include<iostream>
using namespace std;
swap(int *a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int start,int end)
{
int pivot=arr[start];
int i=start+1;
int j=end;
while(i<j)
{
    while(arr[i]<=pivot)
    {
        i++;
    }
    while(arr[j]>pivot)
    {
       j--;
    }
    if(i<j)
    {
        swap(&arr[i],&arr[j]);
        
    }
}
swap(&arr[start],&arr[j]);
return j;
}
//display
void display(int arr[],int size)
{
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}
}
quicksort(int arr[],int start, int end)
{

if(start<end)
{
    int p=partition(arr,start,end);
    quicksort(arr,start,p-1);
    quicksort(arr,p+1,end);
}
}
int main()
{
    int arr[]={3,1,8,4,9,11,20,0,1};
    int size=sizeof(arr)/sizeof(int);

    quicksort(arr,0,size-1);
    display(arr,size);
    return 0;
}