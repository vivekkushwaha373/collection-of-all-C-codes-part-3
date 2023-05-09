// lets discuss the functionality of stack;

#include<iostream>
using namespace std;
class paranthesis
{
string s;
char *arr;
int *str;
int top=-1;
private:
void push(char a)
{
if(top==9)
{
    cout<<"Element cannot be pushed -->stack is Full"<<endl;
}
else
{
 top++;
 arr[top]=a;
}
}
void pop()
{
    if(top==-1)
    cout<<"Element cannot be popped"<<endl;
    else
    top--;
}
public:
paranthesis(){}

paranthesis(string x)
{
    s=x;
    arr=new char[s.length()];
    str=new int[s.length()];
}


void check_paranthesis()
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        {
        push('(');
        str[top]=1;
        }
        if(s[i]=='{')
        {
        push('{');
        str[top]=3;
        }
        if(s[i]=='[')
        {
        push('[');
        str[top]=2;
        }
       
    }
    if(match_parathesis())
    {
        cout<<"paranthesis is matched"<<endl;
    }
    else
    {
        cout<<"paranthesis is not matched"<<endl;
    }
    
}
int match_parathesis()
{
    for(int i=0;i<s.length();i++)
    {
       if(s[i]==')' && arr[top]=='(' && str[top]<=str[top-1])
       {
       pop(); 
       }
       if(s[i]==']' && arr[top]=='['&& str[top]<=str[top-1])
       {
       pop(); 

       }
       if(s[i]=='}' && arr[top]=='{' && str[top]<=str[top-1])
       {
       pop(); 

       }
    }
    if(isEmptyStack())
    {
        return 1;
    }
    else
    return 0;

}
int isEmptyStack()
{
    if(top==-1)
    return 1;
    else
    return 0;
}
};

int main()
{
    string a;
    cin>>a;
    paranthesis x(a);
    x.check_paranthesis();
    
    return 0;
}