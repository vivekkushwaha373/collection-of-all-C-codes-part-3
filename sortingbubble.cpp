#include<iostream>
using namespace std;
swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
bubblesort(int arr[],int n)
{
for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-1-i;j++)
    {
     if(arr[j]>arr[j+1])
     swap(&arr[j],&arr[j+1]);
    }
}
}
display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
int arr[]={1,4,4,5,6,12,8};
int n=7;
cout<<"Before bubble sort: ";
display(arr,n);
bubblesort(arr,n);
cout<<"After  bubble sort: ";
display(arr,n);

    return 0;
}