#include<iostream>
using namespace std;
class Queue
{
//principle FIFO-->first in first out;
    int front;
    int rear;
    int size=10;
    int arr[10]={0};
    public:
    Queue()//it is a Constructor
    {
        front =-1;
        rear=-1;
    }
    Enqueue(int v)
    {
        if(front == rear && front==-1)
        {
            front++;
            arr[++rear]=v;
        }
        else if(rear+1==size)
        {
          cout<<"Element cannot be pushed: "<<endl;
        }
        else
        {
            arr[++rear]=v;
        }
    }
    Dequeue()
    {
     if(front>rear)
     cout<<"Element Cannot be dequeued"<<endl;
     else
     front++;
    }
    display()
    {
        
        for(int i=front;i<=rear;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int IsEmptyQueue()
    {
        if(front>rear)
        return 1;
        else
        return 0;
    }
    int Isqueuefull()
    {
      if(rear+1==size)
      return 1;
      else
      return 0;

    }
};

int main()
{
    Queue s1;
    s1.Enqueue(1);
    s1.Enqueue(2);
    s1.Enqueue(3);
    s1.Enqueue(4);
    s1.Enqueue(5);
    s1.Enqueue(6);
    s1.Dequeue();
    s1.Dequeue();
    s1.Dequeue();
    s1.Dequeue();
    s1.Dequeue();
    s1.Dequeue();
    
    s1.display();
    return 0;
}

