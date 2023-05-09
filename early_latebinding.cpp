#include<iostream>
using namespace std;
//Run time polymorphism
class A
{
int a;

public:
A()
{
    a=5;
}
virtual void display()
{
    cout<<"a = "<<a<<endl;
}
};

class B:public A
{
int b;
public:
B()
{
    b=2;
}
 void display()
{
    cout<<"b = "<<b<<endl;
}
};
int main()
{
   B s;
   A x;
   B *ptr;
   A *arr;
   arr=&s; 
   arr->display();
    return 0;
}
