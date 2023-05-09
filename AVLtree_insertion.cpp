//{What is AVL tree-> Binary tree + balance tree}
#include<iostream>
using namespace std;
class node
{
    public:
    int key;
    node* left;
    node* right;
    int height;
    node(int n)
    {
    key=n;
    left=NULL;
    right=NULL;
    height=1;
    }
};
int max(int a,int b)
{
    return (a>b)?a:b;//ternerary operator or conditional operator;
}
int height(node* root)
{
    if(root==NULL)
    return 0;
    else
    return root->height;
    
}
int getbalancefactor(node* root)
{
// cout<<"balance tree is called:";
if(root==NULL)
return 0;
else
{
int s=height(root->left)-height(root->right);
  cout<<"s = "<<s<<" root= "<<root->key<<", ";
return s;
}
}

node* leftrotation(node* X)
{
node* Y=X->right;
node* T2=Y->left;
Y->left=X;
X->right=T2;
X->height=max(height(X->left),height(X->right))+1;
Y->height=max(height(Y->left),height(Y->right))+1;
return Y;
}
node* rightrotation(node* Y)
{
node* X=Y->left;
node* T2=X->right;
X->right=Y;
Y->left=T2;
Y->height=max(height(Y->left),height(Y->right))+1;
X->height=max(height(X->left),height(X->right))+1;
return X;
}
node* insert(node* root,int key)
{
  if(root==NULL)
  return new node(key);
  if(root->key<key)
  {
  root->right=insert(root->right,key);
  // return root;
  }
  else if(root->key>key)
  {
    root->left=insert(root->left,key);
    // return root;
  }
  else 
  {
    return root;
  }
  root->height=max(height(root->left),height(root->right))+1;
  int bf=getbalancefactor(root);
  //left->left
  if(bf>1 && key<root->left->key)
  {
     return rightrotation(root);
  }
  //right->right
  if(bf<-1 && key>root->right->key)
  {
    return leftrotation(root);
  }
  //left->right
  if(bf>1 && key>root->left->key)
  {
    root->left=leftrotation(root->left);
    return rightrotation(root);
  }
  //right->left
  if(bf<-1 && key<root->right->key)
  {
     root->right=rightrotation(root->right);
     return leftrotation(root);
  }
  return root;
}
 void inorder(node* root)
    {
       if(root==NULL)
       return ;
       else
       {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
       }
    }
int main()
{
node* root=NULL;
root=insert(root,20);
root=insert(root,15);
root=insert(root,10);
root=insert(root,18);
root=insert(root,16);
root=insert(root,19);
root=insert(root,25);
root=insert(root,30);
root=insert(root,23);
root=insert(root,24);
root=insert(root,28);
root=insert(root,40);
//  
inorder(root);

}