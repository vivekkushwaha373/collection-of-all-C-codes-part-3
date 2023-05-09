#include<bits/stdc++.h>
using namespace std;
merge(int *arr,int s1,int e1,int s2,int e2)
{
    int temp[e1+e2-s1-s2+2];
    int i=s1;
    int j=s2;
    int k=0;
    while(i<=e1 &&j<=e2)
    {
        if(arr[i]<arr[j])
        {
            temp[k]=arr[i];
            k++;
            i++;
        }
        if(arr[i]>arr[j])
        {
              temp[k]=arr[j];
              k++;
              j++;
        }
    }
    
    while(i<=e1)
    {
       temp[k]=arr[i];
       k++;i++;
      
    }
    while(j<=e2)
    {
       temp[k]=arr[j];
       k++;j++;
      
    }
    k=0;
    for(int m=s1;m<=e2;m++)
    {
        arr[m]=temp[k];
        k++;
    }
}
void mergesort(int arr[],int start,int end )
{
if(start>=end)
return ;
int mid=(start+end)/2;
mergesort(arr,start,mid);
mergesort(arr,mid+1,end);
merge(arr,start,mid,mid+1,end);

}

void display(int *arr,int n)
{
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
}
int main()
{
int arr[]={8,1,3,7,5,12,10};
int n=7;
cout<<"Before merge Sort: ";
display(arr,n);
mergesort(arr,0,n-1);
cout<<"After  merge Sort: ";
display(arr,n);
    return 0;
}