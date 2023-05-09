#include<iostream>
using namespace std;
class Stack
{
int front;
int rear;
int *arr;
public:
Stack(int n)
{
    arr=new int[n];
    front=-1;
    rear=-1;
}
int pop()
{
  front++;
  return arr[front-1];
}
push(int v)
{
  if(rear==-1)
  {
  arr[++rear]=v;
  front++;
  }
  else
  {  arr[++rear]=v;
     int x=rear;
     int t;
    while(front!=x)
    {
       t=pop();
       arr[++rear]=t;
    }
  }
}
printstack()
{
    for(int i=front;i<=rear;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};

int main()
{
Stack s(20);
s.push(1);
s.push(2);
s.push(3);
s.push(4);

s.printstack();

    return 0;
}