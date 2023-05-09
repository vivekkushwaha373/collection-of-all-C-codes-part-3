#include<iostream>
using namespace std;
class node
{
    public:
    int value;
    node* left;
    node* right;

    node(int v)//constructor is called
    {
        value=v;
        left=NULL;
        right=NULL;
    }
};

void printlevel(node* root,int level)
{
if(level==0)
{
    cout<<root->value<<" ";
    return ;
}
printlevel(root->left,level-1);
printlevel(root->right,level-1);
}
int height(node* root)
{
  if(root==NULL)
  return 0;
  int a=height(root->left);
  int b=height(root->right);
  if(a>b)
  return a+1;
  else
  return b+1;
} 
levelordertraversal(node* root)
{
int h=height(root);
for(int i=0;i<h;i++)
{
    printlevel(root,i);
}
}

int main()
{
    node * root=new node(2);
    root->left=new node(4);
    root->right=new node(8);
    root->right->left=new node(11);
    root->right->right=new node(14);
    root->left->right=new node(10);
    root->left->left=new node(6);
    levelordertraversal(root);
    return 0;
}