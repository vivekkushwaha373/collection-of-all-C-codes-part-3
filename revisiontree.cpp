//Non linear data structure that is tree;
#include<iostream>
using namespace std;
class node
{
    public:
    node *right;
    int value;
    node *left;
    node(int n)
    {
        value=n;
        right=NULL;
        left=NULL;
    } 
    void preorder()
 {
   if(this==NULL)
   return ;
   cout<<this->value<<" ";
   this->left->preorder();
   this->right->preorder();
 }
 void inorder()
 {
   if(this==NULL)
   return ;
   this->left->inorder();
   cout<<this->value<<" ";
   this->right->inorder();
 }
 void postorder()
 {
   if(this==NULL)
   return ;
   this->left->postorder();
   this->right->postorder();
   cout<<this->value<<" ";
 }
};

 


int main()
{
    node* root=new node(2);
    root->left=new node(4);
    root->left->left=new node(6); 
    root->left->right=new node(10);
    root->right=new node(8);
    root->right->left=new node(11);
    root->right->right= new node(14);
    cout<<"preorder: ";
    root->preorder();
    cout<<endl;
    cout<<"inorder: ";
    root->inorder();
    cout<<endl;
    cout<<"postorder: ";
    root->postorder();
    cout<<endl;
    
    return 0;
}