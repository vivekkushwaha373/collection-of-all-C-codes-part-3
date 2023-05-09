#include<iostream>
using namespace std;

void insertion(int prr[],int n)
{
int j,temp;
for(int i=1;i<=n;i++)
{   temp=prr[i];
    for(j=i-1;j>=0;j--)
    {
      if(prr[j]>temp)
      {
        prr[j+1]=prr[j];
      }
      else
      break;
    }
    prr[j+1]=temp;
}
}
void printmyarray(int arr[],int n)
{
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={6,1,2,5,4,3,7};
    cout<<"pattern before sorting"<<endl;
    printmyarray(arr,6);
    insertion(arr,6);
    cout<<"pattren after sorting"<<endl;
    printmyarray(arr,6);
    return 0;
}