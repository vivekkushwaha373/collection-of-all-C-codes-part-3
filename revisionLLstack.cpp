//link list implementation through stack;
#include<iostream>
using namespace std;
class node
{
public:
int value;
node* next;
};
class Stack
{
node* head;
public:
Stack()
{
    head=NULL;
}
push(int v)
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
        temp->next=head;
        head=temp;
    }
}
pop()
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
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();
    s.display();
    return 0;
}