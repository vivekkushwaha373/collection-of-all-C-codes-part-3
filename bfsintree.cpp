#include<iostream>
#include<queue>
using namespace std;
//hum yaha sikh rahe hai levelorder traversal;
class node
{
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
levelorder(node* root)
{
node* n=NULL;
queue<node*>s;
s.push(root);
while(!s.empty())
{
 n=s.front();
 cout<<n->value<<" ";
 s.pop();
 if(n->left!=NULL)
 s.push(n->left);
 if(n->right!=NULL)
 s.push(n->right);
}
}
int main()
{
node* root=new node(2);
root->left=new node(4);
root->left->left=new node(6);
root->left->right=new node(10);
root->right=new node(8);
root->right->left=new node(11);
root->right->right=new node(14);
levelorder(root);

    return 0;
}