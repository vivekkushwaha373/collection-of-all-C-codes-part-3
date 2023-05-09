#include<iostream>
using namespace std;
swap(int *a,int* b)
{
int temp=*a;
*a=*b;
*b=temp;

}
partition(int arr[],int s,int e)
{
int pivot=arr[s];
int i=s+1;
int j=e;
while(i<j)
{
    while(pivot>arr[i])
    {
        i++;
    }
    while(pivot<arr[j])
    {
        j--;
    }
    if(i<j)
    swap(&arr[i],&arr[j]);
}
swap(&arr[s],&arr[j]);
return j;
}
void quicksort(int arr[],int s,int e)
{
  if(s>=e)
  return ;
  
  int p=partition(arr,s,e);
  quicksort(arr,s,p-1);
  quicksort(arr,p+1,e);

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
    int arr[]={1,4,10,3,2};
    quicksort(arr,0,4);
    display(arr,5);
    return 0;
}
// #include<iostream>
// using namespace std;
// merge(int ptr[],int s,int s1,int e ,int e1)
// {
// int arr[e1-s+1];//size of the array;
// int i=s;
// int j=e;
// int k=0;
// while(i<=s1 && j<=e1)
// {
// if(ptr[i]<=ptr[j] )
// {
//     arr[k]=ptr[i];
//     k++;
//     i++;
// }
// if(ptr[i]>ptr[j] )
// {
//     arr[k]=ptr[j];
//     j++;
//     k++;
// }
// }

// while(i<=s1)
// {
//         arr[k]=ptr[i];
//         i++;k++;
// }

// while(j<=e1)
// {
//         arr[k]=ptr[j];
//         j++;k++;
// }

// k=0;
// for(int m=s;m<=e1;m++)
// {
//     ptr[m]=arr[k];
//     k++;
// }
// }
// void mergesort(int arr[],int s,int e)
// {
//    int mid=(s+e)/2;
//    if(s<e)
//    {
//     mergesort(arr,s,mid);
//     mergesort(arr,mid+1,e);
//     merge(arr,s,mid,mid+1,e);
//    }
// }
// void display(int arr[],int n)
// {
// for(int i=0;i<n;i++)
// {
//     cout<<arr[i]<<" ";
// }
// }
// int main()
// {
// int arr[]={2,3,10,1,4};
// mergesort(arr,0,4);
// display(arr,5);
// }
// #include<iostream>
// using namespace std;
// swap(int *a,int *b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// void bubblesort(int arr[],int n)
// {
// for(int i=0;i<n-1;i++)
// {
//     for(int j=0;j<n-i-1;j++)
//     {
//        if(arr[j]>arr[j+1])
//        swap(&arr[j],&arr[j+1]);
//     }
// }
// }
// void display(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
// int main()
// {
//     int arr[]={3,4,1,2,6};

//     bubblesort(arr,5);
//     display(arr,5);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void insertionsort(int arr[],int n)
// {
// int pivot;
//     int j;
// for(int i=0;i<n;i++)
// {
//     pivot=arr[i];
//     for(j=i-1;j>=0;j--)
//     {
//        if(pivot<arr[j])
//        arr[j+1]=arr[j];
//        else
//        break;     
//     }
//     arr[j+1]=pivot;
// }
// }
// void display(int arr[],int n)
// {
// for(int i=0;i<n;i++)
// cout<<arr[i]<<" ";
// }
// int main()
// {
// int arr[]={4,7,1,54,2};
// insertionsort(arr,5);
// display(arr,5);

//     return 0;
// }

// #include<iostream>
// using namespace std;
// void selectionsort(int arr[],int n)
// {
// int min;
// for(int i=0;i<n-1;i++)
// {
//      min=i;
//     for(int j=i+1;j<n;j++)
//     {
//       if(arr[min]>arr[j])
//       {
//         min=j;
//       }
//     }
//     int temp=arr[i];
//     arr[i]=arr[min];
//     arr[min]=temp;
// }
// }
// void display(int arr[],int n)
// {
// for(int i=0;i<n;i++)
// {
//     cout<<arr[i]<<" ";
// }
// }
// int main()
// {
//     int arr[]={3,7,1,9,2};
//     selectionsort(arr,5);
//     display(arr,5);
//     return 0;
// }