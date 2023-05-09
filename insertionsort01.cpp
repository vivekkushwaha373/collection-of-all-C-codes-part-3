#include<iostream>
using namespace std;
insertionsort(int *arr,int size)
{int k;
for(int i=0;i<size;i++)
{
    k=arr[i+1];
    for(int j=i;j>=0;j--)
    {
       if(arr[j]>k)
       {
            arr[j+1]=arr[j];
            arr[j]=k;
       }

    }
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
insertionsort(arr,8);
display(arr,8);    
return 0;
}