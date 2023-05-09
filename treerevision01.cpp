#include<iostream>
using namespace std;
class node
{
    public:
    node *right;
    int value;//then what?
    node *left;
    public:
    node(int v)
    {
        right=NULL;
        value=v;
        left=NULL;
    }

};
levelorder(node* root)
{
    
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
    preordertraversal(root);
    return 0;
}