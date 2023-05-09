#include<iostream>
using namespace std;
class CQueue
{
int front;
int rear;
int size=10;
int arr[10]={0};
public:
CQueue()
{
    front=-1;
    rear=-1;
}
Enqueue(int v)
{
if(front==rear && rear==-1)
{   
    front=(front+1)%size;
    rear=(rear+1)%size; 
    arr[rear]=v;
}
else if(((rear+1)%size)==front)
{
    cout<<"Element cannot be Enqueued"<<endl;
}
else
{
    rear=(rear+1)%size; 
    arr[rear]=v;
    
}
}
Front()
{
    cout<<front<<" "<<rear<<endl;
}
Dequeue()
{
   if(front!=rear)
   {
    front=(front+1)%size;
   }
   else if(front==-1)
   {
     cout<<"Element cannot be dequeued"<<endl;
   }
   else if(front==rear)
   {
    front=(front+1)%size;
    front=-1;
    rear=-1;
   }
}
int IsEmptyQueue()
{
 if(rear==-1)
 return 1;
 else
 return 0;
}
int IsFullQueue()
{
 if(((rear+1)%size)==front)
  return 1;
  else
  return 0;
}
void display()
{
    int i;
    if(front==-1)
    {
        exit(0);
    }
    else
    {
    for(i=front;i!=rear;i=(i+1)%size)
    {
        cout<<arr[i]<<" ";
    }
    cout<<arr[i]<<endl;
    }
}
};
int main()
{
    CQueue s;
    s.Enqueue(1);
    s.Enqueue(2);
    s.Enqueue(3);
    s.Enqueue(4);
    s.Enqueue(5);
    s.Enqueue(6);
    s.Enqueue(7);
    s.Enqueue(8);
    s.Enqueue(9);
    s.Enqueue(10);
    s.Dequeue();
    s.Dequeue();
    s.Dequeue();
    s.Dequeue();
    s.Dequeue();
    s.Dequeue();
    s.Dequeue();
    s.Dequeue();
    s.Dequeue();
    s.Dequeue();
    s.Dequeue();
    // s.Dequeue();
    if(s.IsFullQueue())
    cout<<"Queue is Full"<<endl;
    if(s.IsEmptyQueue())
    cout<<"Queue is Empty"<<endl;
    s.display();
    return 0;
}