#include<iostream>
using namespace std;
class A
{
int a;
public:
A(int b)
{
    a=b;
}
display()
{
    cout<<a<<endl;
}
};
class B:public A, public C
{
int b;
public:
B(int a,int c): C(), A(a)
{
    b=c;
}
display()
{
    cout<<b<<endl;
}
};
int main()
{
B z;
z.A::display();
}