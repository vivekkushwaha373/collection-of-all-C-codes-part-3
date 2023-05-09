#include<iostream>
using namespace std;
swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int start,int end)
{
    
    int i=start+1;
    int j=end;
    while(i<j)
    {
     while(arr[i]<=arr[start])
     {
        i++;
     }
     while(arr[j]>arr[start])
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
void quicksort(int *arr,int start,int end)
{
if(start<end)
{int p=partition(arr,start,end);
quicksort(arr,start,p-1);
quicksort(arr,p+1,end);
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
    int arr[]={1,4,2,7,5,10,9};
    int n=7;
    quicksort(arr,0,n-1);
    display(arr,n);
    return 0;
}