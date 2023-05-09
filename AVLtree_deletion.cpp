#include<iostream>
using namespace std;
class node
{
    public:
    int height;
    node* right;
    node* left;
    int key;
    node(int k) // here constructor is called;
    {
        right=NULL;
        left=NULL;
        key=k;
        height=1;
    }
};
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
node* min_element(node* root)
{
    if(root->left==NULL)
    return root;
    else 
    return min_element(root->left);
}
int max(int a,int b)
{
    return (a>b)?a:b;
}
int height(node* root)
{
    if(root==NULL)
    return 0;
    else
    return root->height;
}
node* rightrotation(node* Y)
{
node* X=Y->left;
node* l2=X->right;
X->right=Y;
Y->left=l2;
X->height=max(height(X->left),height(X->right))+1;
Y->height=max(height(Y->left),height(Y->right))+1;
return X;
}
node* leftrotation(node* Y)
{
node* X=Y->right;
node* l2=X->left;
X->left=Y;
Y->right=l2;
X->height=max(height(X->left),height(X->right))+1;
Y->height=max(height(Y->left),height(Y->right))+1;
return X;
}
int getbalancefactor(node* root)
{
if(root==NULL)
return 0;
else
{
    int s=height(root->left)-height(root->right);
    cout<<"s = "<<s<<" ";
    return s;
}
}
node* deletion(node* root,int key)
{
    if(root==NULL)
    return root;
    else if(root->key>key)
    {
    root->left=deletion(root->left,key);
    // return root;
    }
    else if(root->key<key)
    {
    root->right=deletion(root->right,key);
    // return root;
    }
    else if(root->key==key)
    {
        if(root->right==NULL && root->left==NULL)
        {
           delete root;
           return NULL;
        }
        else if(root->right!=NULL && root->left!=NULL)
        {
            node* temp=min_element(root->right);
            int t=root->key;
            root->key=temp->key;
            temp->key=t;
            root->right=deletion(root->right,key);
            // return root;
        }
        else
        {
            if(root->left!=NULL)
             {
             node* temp=root->left;
             delete root;
             return temp;
             }
             else
             {
            node* temp=root->right;
            delete root;
            return temp;
             }
        }
    }
    // Now we have to check for AVL rotation;
    root->height=max(height(root->right),height(root->left))+1;
    int bf=getbalancefactor(root);
    if(bf<-1)
    {
     if(getbalancefactor(root->right)<=0)
     {
     root=leftrotation(root);
     return root;
     }
     else if(getbalancefactor(root->right)>0)
     {
     root->right=rightrotation(root->right);
     root=leftrotation(root);
     return root;
     }
    }
    if(bf>1)
     {
     if(getbalancefactor(root->left)>=0)
     {
     root=rightrotation(root);
     return root;
     }
     else if(getbalancefactor(root->left)<0)
     {
     root->left=leftrotation(root->left);
     root=rightrotation(root);
     return root;
     }
    }
return root;
}
//insertion;
node* insert(node* root,int key)
{
  if(root==NULL)
  return new node(key);
  else if(root->key<key)
  {
  root->right=insert(root->right,key);
//   return root;
  }
  else if(root->key>key)
  {
    root->left=insert(root->left,key);
    // return root;
  }
  root->height=max(height(root->left),height(root->right))+1;
  int bf=getbalancefactor(root);
  //left->left
  if(bf>1 && key<root->left->key)
  {
     root=rightrotation(root);
  }
  //right->right
  if(bf<-1 && key>root->right->key)
  {
    root=leftrotation(root);
  }
  //left->right
  if(bf>1 && key>root->left->key)
  {
    root->left=leftrotation(root->left);
    root=rightrotation(root);
  }
  //right->left
  if(bf<-1 && key<root->right->key)
  {
     root->right=rightrotation(root->right);
     root=leftrotation(root);
  }
  return root;
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
inorder(root);
root=deletion(root,40);
cout<<endl;
inorder(root);
root=deletion(root,20);
cout<<endl;
inorder(root);
root=deletion(root,28);
cout<<endl;
inorder(root);
// root=deletion(root,10);
// cout<<endl;
// inorder(root);
// root=deletion(root,16);
// cout<<endl;
// inorder(root);
// root=deletion(root,15);
// cout<<endl;
// inorder(root);
    return 0;
}