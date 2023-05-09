//heap insertion
//First consider the heap is maximum;
#include<bits/stdc++.h>
using namespace std;

swap(int* a,int* b)
{
int temp;
temp =*a;
*a = *b;
*b = temp;
}
void deletion(int arr[],int v,int *n)
{
    
   swap(&arr[v],&arr[*n]);
    *n=*n-1;
   while(1)
   {
    if((2*v+1)>*n)
    return ;
    else if(arr[2*v+1]>arr[v] && arr[2*v+2]>arr[v])
    {
        if(arr[2*v+1]>arr[2*v+2])
       { 
        swap(&arr[2*v+1],&arr[v]);
        v=2*v+1;
       }
        else
        {
            swap(&arr[2*v+2],&arr[v]);
            v=2*v+2;
        }
    }
    else if(arr[2*v+1]>arr[v])
  {  
    swap(&arr[2*v+1],&arr[v]);
    v=2*v+1;
  }
    else if(arr[2*v+2]>arr[v])
 {   swap(&arr[2*v+2],&arr[v]);
     v=2*v+2;
 }
    else if(arr[2*v+1]<arr[v] && arr[2*v+2]<arr[v])
    return;
    
   }
   //first 
}
void insert(int arr[],int m,int v)
{
int n=m+1;
arr[n]=v;
while(1)
{
    if(n==0)
    return ;
    else
    {
        if(arr[n]<arr[(n-1)/2])
        return ;
        else if(arr[n]>arr[(n-1)/2])
        {
            swap(&arr[n],&arr[(n-1)/2]);
            n=(n-1)/2;
        }

    }
}
}
printarray(int arr[],int n)
{
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    //array representation of a heap
    // int arr[MAX]={0};
    int arr[50]={10,8,7,6,5,4,3};
   int count=6;
    insert(arr,count,9);
    count++;
    insert(arr,count,12);
    count++;
    
    
    deletion(arr,0,&count);
    printarray(arr,count);
    
    
    // n=sizeof(arr)/sizeof(int);
    // cout<<s;
    // insert(arr,n-1,6);
    // n=sizeof(arr)/sizeof(int);
    
    
   return 0;
}