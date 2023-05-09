#include<iostream>
using namespace std;
class node
{
public:
int value;
node* right;
node* left;
node(int v)
{
value=v;
right=NULL;
left=NULL;
}
};
node* min_element(node* root)
{
    if(root==NULL)
    return root;
    else if(root->left==NULL)
    return root;
    else
    return min_element(root->left);
}
node* max_element(node* root)
{
if(root==NULL)
return root;
   else if(root->right==NULL)
    return root;
    else
    return max_element(root->right);
}
int main()
{
    node* root=new node(25);
    root->left=new node(15);
    root->right=new node(40);
    root->left->left=new node(10);   
    root->left->right=new node(18);
    root->left->right->left=new node(16);
    root->right->left=new node(30);
    root->right->right=new node(60);
    root->right->right->left=new node(50);
    root->right->right->right=new node(70);
    root->right->right->right->left=new node(65);
    cout<<max_element(root)->value;
    cout<<endl;
    cout<<min_element(root)->value;
    return 0;
}