#include<iostream>
using namespace std;
selectionsort(int *arr,int size)
{
    int m;
    int t;
    for(int i=0;i<size-1;i++)
    {
        m=i;
        for(int j=i+1;j<size;j++)
        {
           if(arr[m]>arr[j])
           {
             m=j;
           }
        }
        t=arr[i];
        arr[i]=arr[m];
        arr[m]=t;
    }
}
display(int *ptr,int size)
{
for(int i=0;i<size;i++)
{
    cout<<ptr[i]<<" ";
}
}
int main()
{
int arr[]={4,5,6,1,7,9,2,10};
selectionsort(arr,8);
display(arr,8);    
return 0;
}