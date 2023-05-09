//postfix-->conversion through stack
#include<iostream>
using namespace std;
class postfix
{
string s;
char *ptr;
char *str;
int ptop=-1;
int stop=-1;
public:
postfix(string x)
{
    s=x;
    ptr = new char[s.length()];
    str = new char[s.length()];
}
ppush(char v)
{
ptr[++ptop]=v;
}
spush(char v)
{
str[++stop]=v;
}
spop()
{
    if(stop>=0)
    --stop;
}
int check_priority(char v)
{
if(v=='+' || v=='-')
return 1;
else
{
return 2;
}
}
Pconversion()
{

for(int i=0;i<s.length();i++)
{
    if(s[i]>=48 && s[i]<=57)
    ppush(s[i]);
    if(s[i]=='+' || s[i]=='*' || s[i]=='-' || s[i]=='/')
    {
       
      
       if(stop==-1)
       {
        spush(s[i]);
       }
      else
      {
      if(check_priority(s[i])>check_priority(str[stop]))
      {
         
         spush(s[i]);
      }
      else
      {
        while(stop!=-1)
        {
        ppush(str[stop]);
        spop();
        }
        spush(s[i]);
      }
      }
    }
}
if(stop!=-1)
{
    while(stop!=-1)
    {
        ppush(str[stop]);
        spop();
    }
}
ptr[ptop+1]='\0';
}
void display()
{
    cout<<ptr;
}
};

int main()
{
string x="1-2/3-4*5";
// cin>>x;
postfix s(x);
s.Pconversion();
s.display();
return 0;
}