#include<iostream>
using namespace std;
swap(int *a, int *b)
{
    int k;
    k=*a;
    *a=*b;
    *b=k;
}
int partition(int *arr,int start,int end)
{
  int i=start+1,j=end;
  while(i<j)
  {
    
    while(arr[i]<=arr[start] && i<end)
    {
    
    i++;
    
    }
    while(arr[j]>arr[start] )
    {
  
    j--;
    
    }
    
    if(i<j )
    {
        swap(&arr[i],&arr[j]);
    }

   
  }
  
  swap(&arr[start],&arr[j]);
  return j;

}
void quickSort(int *arr,int start,int end)
{
if(start>=end)
return ;
int p=partition(arr,start,end);
quickSort(arr,start,p-1);
quickSort(arr,p+1,end);
}
void display(int *arr,int n)
{
   cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
int arr[]={1,4,2,7,5,10,9};
int n=7;
quickSort(arr,0,n-1);
display(arr,n);
    
}