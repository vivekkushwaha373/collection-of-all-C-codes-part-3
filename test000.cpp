#include<iostream>
using namespace std;
#include<map>
int main()
{
map<int,int>x;
x.insert(pair<int,int>(1,3));
for(auto i=x.begin();i!=x.end();i++)
{
    cout<<i->first<<" "<<i->second;
              cout<<endl;
}


    return 0;
}