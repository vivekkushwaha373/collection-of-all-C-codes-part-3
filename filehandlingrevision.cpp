#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream s;
    char str[20];
    char c;
    s.open("vivkush.txt",ios::in);
    // s<<1"Hii Zoya I love you"<<endl;
    while(!s.eof())
    {
        s.getline(str,20);
        cout<<str;
    }
    s.close();
}