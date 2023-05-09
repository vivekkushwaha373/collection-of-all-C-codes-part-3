#include<iostream>
#include<unordered_set>
#include<set>
using namespace std;
int main()
{
unordered_set<int>s;
s.insert(1);
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(3);
s.insert(6);

unordered_set<int>::iterator p;
p=s.begin();
while(p!=s.end())
{
    cout<<*p<<" ";
    p++;
}
// for(auto i : s)
// {
//     cout<<i<<" ";
// }
    return 0;
}