#include<iostream>
using namespace std;
swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
bubblesort(int arr[],int size)
{
int flag=0;
for(int j=0;j<size-1;j++)
{
    flag=0;
for(int i=0;i<size-1-j;i++)
{
if(arr[i]>arr[i+1])
{
    swap(&arr[i],&arr[i+1]);
    flag=1;

}
}
if(flag==0)
break;
}
}
void display(int *ptr,int n)
{
    
for(int i=0;i<n;i++)
{
    cout<<ptr[i]<<" ";
}
}
int main()
{
   int arr[10]={7,2,10,4,5,6,8,1,9,3};
   bubblesort(arr,10);
   display(arr,10);
    return 0;
}