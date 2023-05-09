#include<iostream>
using namespace std;

class node
{
public:
int value;
node* left;
node* right;
int height;
node(int v)
{
    value=v;
    left=NULL;
    right=NULL;
    height=1;
}
};
int max(int a,int b)
{
    return a>b?a:b;
}
int height(node* root)
{
    if(root==NULL)
    return 0;
    else 
    return root->height;
}
int balancefactor(node* root)
{
    if(root==NULL)
    return 0;
    return height(root->left)-height(root->right);
}
node* rightrotation(node* Y)
{
    node* X=Y->left;
    node* T2=X->right;
    Y->left=T2;
    X->right=Y;
Y->height=max(height(Y->left),height(Y->right))+1;
X->height=max(height(X->left),height(X->right))+1;
    return X; 
}
node* min_element(node* root)
{
    if(root->left==NULL)
    return root;
    else
    return min_element(root->left);
}
node* leftrotation(node*Y)
{
node* X=Y->right;
node* T2=X->left;
Y->right=T2;
X->left=Y;
Y->height=max(height(Y->left),height(Y->right))+1;
X->height=max(height(X->left),height(X->right))+1;
return X;   
}
node* deletion(node* root,int v)
{
    if(root==NULL)
    return root;
    else if(root->value<v)
    {
     root->right=deletion(root->right,v);
    }
    else if(root->value>v)
    {
        root->left=deletion(root->left,v);
    }
    else if(root->value==v)
    {
        //case1;
        if(root->left==NULL && root->right==NULL)
        {
             delete root;
             return NULL;
        }
        //case2;
        else if(root->left==NULL || root->right==NULL)
        {
            node* t=NULL;
            if(root->left==NULL)
            t=root->right;
            else
            t=root->left;
            delete root;
            return t;
        }
        else if(root->left!=NULL && root->right!=NULL)
        {
             node* t=min_element(root->left);
             int temp=root->value;
             root->value=t->value;
             t->value=temp;
             root->left=deletion(root->left,v);
        }

    }
    if(height(root->left)>height(root->right))
    root->height=height(root->left)+1;
    else
    root->height=height(root->right)+1;
    int bf=balancefactor(root);
        //left->left
  if(bf>1 && v<root->left->value)
  {
     return rightrotation(root);
  }
  //right->right
  if(bf<-1 && v>root->right->value)
  {
    return leftrotation(root);
  }
  //left->right
  if(bf>1 && v>root->left->value)
  {
    root->left=leftrotation(root->left);
    return rightrotation(root);
  }
  //right->left
  if(bf<-1 && v<root->right->value)
  {
     root->right=rightrotation(root->right);
     return leftrotation(root);
  }

    return root;
}
node* insertion(node* root,int v)
{
    if(root==NULL)
    return new node(v);
    else if(root->value<v)
    root->right=insertion(root->right,v);
    else if(root->value>v)
    root->left=insertion(root->left,v);
    
    if(height(root->left)>height(root->right))
    root->height=height(root->left)+1;
    else
    root->height=height(root->right)+1;
    int bf=balancefactor(root);
        //left->left
  if(bf>1 && v<root->left->value)
  {
     return rightrotation(root);
  }
  //right->right
  if(bf<-1 && v>root->right->value)
  {
    return leftrotation(root);
  }
  //left->right
  if(bf>1 && v>root->left->value)
  {
    root->left=leftrotation(root->left);
    return rightrotation(root);
  }
  //right->left
  if(bf<-1 && v<root->right->value)
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
        cout<<root->value<<" ";
        inorder(root->right);
       }
    }
int main()
{
node* root=NULL;
root=insertion(root,10);
root=insertion(root,20);
root=insertion(root,15);
root=insertion(root,18);
root=insertion(root,16);
root=insertion(root,19);
root=insertion(root,25);
root=insertion(root,30);
root=insertion(root,23);
root=insertion(root,24);
root=insertion(root,28);
root=insertion(root,40);
//  
inorder(root);
cout<<endl;
root=deletion(root,40);
inorder(root);
cout<<endl;
root=deletion(root,19);
inorder(root);
cout<<endl;
root=deletion(root,10);
inorder(root);
cout<<endl;

}