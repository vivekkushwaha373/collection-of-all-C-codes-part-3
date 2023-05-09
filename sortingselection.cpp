#include<iostream>
using namespace std;
selectionsort(int *arr,int n)
{
int m;int temp;
for(int i=0;i<n;i++)
{
   m=i;
    for(int j=i+1;j<n;j++)
    {
      if(arr[m]>arr[j])
      m=j;
    }
    temp=arr[i];
    arr[i]=arr[m];
    arr[m]=temp;
    
    
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
int arr[]={1,4,8,2,6,10,5,2,6,7,8,9,9,100,23,21,45};
int n=17;
cout<<"Before selection sort: ";display(arr,n);
cout<<"After  selection sort: ";selectionsort(arr,n);
display(arr,n);
return 0;
}