#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class Parenthesis
{
char *ptr;
char *str;
int size;
int top=-1;
public:
  Size(int n)
  {
  size=n;
  }
  allocate(char a[])
  {
    str=new char[size+1];
    ptr=new char[size+1];
    for(int i=0;a[i]!='\0';i++)
    {
      ptr[i]=a[i];
    }
    ptr[size]='\0';
  }
  push(char v)
  {
    if((top+1)==size)
    {
        cout<<"Element cannot be pushed"<<endl;
    }
    else
        { top++;
            str[top]=v;
        }
  }
  int pop()
  {
   if(top==-1)
   {cout<<"Element cannot be popped "<<endl;
   return 0;}
   else
   {top--;
   return str[top+1];
   }
  }
  int Top()
  {
    return str[top];
  }
  void check()
  {
    char j;
   for(int i=0;ptr[i]!='\0';i++)
   {
    if(Ifparan(ptr[i]))
        {
          if(ptr[i]=='(' || ptr[i]=='[')
          push(ptr[i]);
          else if(ptr[i]==')' && str[top]=='(' || ptr[i]==']'&& str[top]=='[')
          {
            pop();
          }
          
            
          } 
        }    
    
   }
   if(!IfEmpty())
   {
    cout<<"Error Parenthesis"<<endl;
    return;
   }
   else
   {
    cout<<"No error"<<endl;
    return ;
   }
  }
  int IfEmpty()
  {
    if(top==-1)
    return 1;
    else
    return 0;
  }
  int Ifparan(char c)
  {
    if(c=='('|| c==')' || c=='['||c==']')
    {
        return 1;
    }
    else
       return 0;
  }

};

int main()
{
    char arr[]= "[()]";
    Parenthesis s;
    s.Size(strlen(arr));
    s.allocate(arr);
    s.check();
    return 0;
}