#include<iostream>
using namespace std;
class node
{
public:
int value;
node* next;

};
class queue
{
node* head;
public:
queue()
{
    head=NULL;
}
void push(int v)
{
    node* temp=new node;
    temp->value=v;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
      node* t=head;
      while(t->next!=NULL)
      {
        
        t=t->next;
      }
      t->next=temp;
    }
}
void pop()
{
    head=head->next;
}
void display()
{
    node* t=head;
    while(t!=NULL)
    {
       cout<<t->value<<" ";
       t=t->next;
    }
}
};


int main()
{
    queue x;
    x.push(1);
    x.push(2);
    x.push(3);
    x.push(6);
    x.pop();
    x.display();
    return 0;
}