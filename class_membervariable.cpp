#include<iostream>
using namespace std;
class A
{

public:
static int a;
};
int A:: a=3;
int main()
{
A s;
cout<<A::a<<" ";
    return 0;
}