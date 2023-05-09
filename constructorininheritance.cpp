#include<iostream>
using namespace std;
class A
{
int a;
public:
A(int a)
{
cout<<"Cnstructor of A is called "<<endl;
this->a=a;
}
void display()
{
    cout<<"a = "<<a<<endl;
}
~A()
{
    cout<<"Destructor of A is called "<<endl;
}
};
class B 
{
int b;
public:
B(int b)
{
cout<<"Constructor of B is called: "<<endl;
this->b=b;
}
void display()
{
    cout<<"b = "<<b<<endl;
}
~B()
{
    cout<<"Destructor of B is called: "<<endl;
}
};

class C: public A, public B
{
int c;
public:
C(int c): B(2),A(3)
{
    this->c=c;
}
void display()
{
    cout<<"c = "<<c<<endl;
}
};

int main()
{
    C s(4);
    s.B::display();
}