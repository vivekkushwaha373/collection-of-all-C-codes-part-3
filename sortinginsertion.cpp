#include<iostream>
using namespace std;
void insertionsort(int *arr,int n)
{
int pivot;
for(int i=0;i<n-1;i++)
{
    pivot=arr[i+1];
    for(int j=0;j<=i;j++)
    {
      if(pivot<arr[j])
      {
        while(i>=j)
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[j]=pivot;
      }

    }
}
}
void display(int arr[],int n)
{
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
}
int main()
{
int arr[]={1,4,8,2,6,10,5};
int n=7;
cout<<"Before insertion sort: ";display(arr,n);
cout<<"After  insertion sort: ";insertionsort(arr,n);
// display(arr,n);
display(arr,n);
return 0;
}