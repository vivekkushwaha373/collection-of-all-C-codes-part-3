#include<iostream>
using namespace std;
class twostack
{
int *arr;
int top1;
int top2;
int size;
public:
twostack(int n)
{
arr=new int[n];
top1=-1;
top2=n;
size=n;

}
push1(int v)
{
  if(top1<((size/2)-1))
  arr[++top1]=v;
  else
  {
    cout<<"overflow stack1"<<endl;
  }
}
push2(int v)
{
if(top2>size/2)
arr[--top2]=v;
else
{
    cout<<"overflow stack2"<<endl;
}
}
pop1()
{
  if(top1>-1)
 {
    --top1;
 }  
 else
{
    cout<<"underflow stack1"<<endl;
}
}
pop2()
{
if(top2<size)
++top2;
else
    cout<<"underflow stack2"<<endl;
}
IsFullstack1()
{
   if(top1==size/2-1)
   return 1;
   else
   return 0;
}
IsFullstack2()
{
   if(top2==size/2)
   return 1;
   else
   return 0;
}
int IsEmptystack1()
{
   if(top1==-1)
   return 1;
   else
   return 0; 
}
int IsEmptystack2()
{
if(top2==size)
return 1;
else
return 0;
}
printstack1()
{
  while(top1!=-1)
  {
    cout<<arr[top1]<<" ";
    top1--;
  }
  cout<<endl;
}
printstack2()
{
while(top2!=size)
  {
    cout<<arr[top2]<<" ";
    top2++;
  }
  cout<<endl;
}
};
int main()
{
twostack x(10);
x.push1(1);
x.push1(2);
x.push1(3);
x.push1(4);
x.push1(5);
x.push2(6);
x.push2(7);
x.push2(8);
x.push2(9);
x.push2(10);
// x.push2(3);
x.printstack1();
x.printstack2();
if(x.IsEmptystack1())
{
   cout<<"Stack1 is Empty"<<endl; 
}
else
{
    cout<<"stack1 is not Empty"<<endl;
}
if(x.IsEmptystack2())
{
  cout<<"stack2 is Empty"<<endl;
}
else
{
    cout<<"stack2 is not Empty"<<endl;
}
x.pop1();
x.pop2();
    return 0;
}