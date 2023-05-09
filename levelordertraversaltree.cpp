#include<iostream>
#include<queue>
using namespace std;
class node
{
int arr[50];
public:
node* right;
int value;
node* left;
node(int v)
{
right=NULL;
left=NULL;
value=v;
}
};
printlevelorder(node* root)
{
queue<node*>s;
s.push(root);
while(!s.empty())
{
 
node* temp=s.front();
  cout<<temp->value<<" ";
  s.pop();
    if(temp->left!= NULL)
  {  
   s.push(temp->left);
  }
    if(temp->right!= NULL)
  {  
    s.push(temp->right);
  }
  
  
}

}

int main()
{
node* root=new node(2);
root->left=new node(11);
root->right=new node(8);
root->left->left=new node(6);
root->left->right=new node(12);
root->right->left=new node(11);
root->right->right=new node(14);
printlevelorder(root);
    return 0;
}