#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    // friend void operator++(A&);
    void operator=(int d)
    {
       a=d;
        // return this;
    }
    void display()
    {
        cout<<a<<" ";
    }
};
 //urinary operator ka friend functio nahi ban sakta
// void operator++(A &x) 
// {
//       x.a=2;
// }
int main()
{
    A s;
    s=5;
    s.display();
}