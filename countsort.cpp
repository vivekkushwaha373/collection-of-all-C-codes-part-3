#include<bits/stdc++.h>
using namespace std;
int max_Element(int A[],int n)
{
int max=INT_MIN;
for(int i=0;i<n;i++)
{
    if(max<A[i])
    max=A[i];
}
return max;
}
countsort(int A[],int n)
{
    int max=max_Element(A,n);//max element will be returned;
    int *count=new int[max+1];
    for(int i=0;i<max+1;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
       count[A[i]]=count[A[i]]+1;
       A[i]=0; 
    }
    
    cout<<endl;
    int i=0;int j=0;
    while(i<max+1)
    {
      while(count[i]>0)
        {
            count[i]=count[i]-1;
            A[j]=i;
            j++;
        }
        i++;
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
int A[]={1,5,6,7,2,4,6};
int n=7;
countsort(A,n);
display(A,n);
return 0;
}