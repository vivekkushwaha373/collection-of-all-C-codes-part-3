#include<iostream>
#include<queue>
using namespace std;
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
int Height(node* root)
{
    if(root==NULL)
    return 0;
    
        int lh=Height(root->left);
        int rh=Height(root->right);
        if(lh<rh)
        return rh+1;
        else
        return lh+1;
    

}
int diameteroftree(node* root)
{
   int s=Height(root->left)+Height(root->right)+1;
    return s; 
}
node* Min_Element(node* root)
{
    if(root->left==NULL)
    return root;
    else
    return Min_Element(root->left);
    
}
node* Max_Element(node* root)
{
if(root->right==NULL)
return root;
return Max_Element(root->right);
}
node* Inorderpredeccessor(node* root,int key)
{
 static node* temp=NULL;

   if(root==NULL)
   {
    cout<<"Node is not existed";
    return NULL;
   }
   if(root->value==key)
   {
    if(root->left==NULL && temp==NULL)
    {
        cout<<"precedeccssor is not found"<<endl;
        return temp;
    }
    else if(root->left==NULL && temp!=NULL)
    return temp;
    else 
    return Max_Element(root->left);
   }
   else if(root->value>key)
   {
    Inorderpredeccessor(root->left,key);
   }
   else if(root->value<key)
   {
   temp=root;
    Inorderpredeccessor(root->right,key);
   }
}
int Inordersuccessor(node* root,int key)
{
    int succ=-1;
    if(root==NULL)
    return -1;
    node* temp=root;
    while(temp->value!=key)
    {
        if(temp==NULL)
        {
            cout<<"No Such Element is exist"<<endl;
            return -1;
        }
        else if(temp->value>key)
        {
            succ=temp->value;
            temp=temp->left;
        }
        else if(temp->value<key)
        {
           temp=temp->right;
        }
    }
    if(succ==-1 && temp->right==NULL)
    {
        cout<<"Successor doesn't exist"<<endl;
        return succ;
    }
    else if(temp->right==NULL)
    return succ;
    else if(temp->right!=NULL)
    return Min_Element(temp->right)->value;
}
    // recursive approach;
    node* insertioninBST(node* root,int key)
    {
     if(root==NULL)
     return new node(key);
       if(root->value==key)
       {
         cout<<"Element cannot be inserted"<<endl;
         return root;
       }
    
     else if (root->value>key)
     {
        root->left=insertioninBST(root->left,key);
     }
     else
     {
        root->right=insertioninBST(root->right,key);
     }
     }
    //-->Non recursive approach
    // void insertioninBST(node* root,int key)
    // {
    //  node* prev=NULL;
    //  while(root!=NULL)
    //  {
    //    prev=root;
    //    if(root->value>key)
    //    root=root->left;
    //    else if(root->value<key)
    //    root=root->right;
    //    else if(root->value==key)
    //    {
    //     cout<<"Element can not be inserted"<<endl;
    //     return ;
    //    }
    //  }
    //  node* ptr=new node(key);
    //  if(prev->value<key)
    //  {
    //     prev->right=ptr;
    //  }
    //  else
    //  {
    //     prev->left=ptr;
        
    // }

    // }
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
// node* Inordersuccessor(node* root,int v)
// {
//     if(root==NULL)
//     return root;
//     if(root->value==v)
//     {
//     return Min_Element(root->right);
//     }
//     else if(v>root->value)
//     return Inordersuccessor(root->right,v);
//     else if(v<root->value)
//     return Inordersuccessor(root->left,v);
//     }
int main()
{
    //BST tree
node* root=new node(20);
root->left=new node(15);
root->left->left=new node(10);
root->left->right=new node(18);
root->left->right->left=new node(16);
root->left->right->right=new node(19);
root->right=new node(25);
root->right->right=new node(30);
root->right->left=new node(23);
root->right->left->right=new node(24);
root->right->right->left=new node(28);
root->right->right->right=new node(40);
// inorder(root);
// cout<<endl;
// insertioninBST(root,10);
// inorder(root);
// cout<<endl;

// cout<<"Height of the tree is: "<<Height(root);
// cout<<endl;
// cout<<"Diameter of the tree is : "<<diameteroftree(root);
// cout<<endl;
if(Inorderpredeccessor(root,18)!=NULL)
cout<<"Inorder successor : "<<Inorderpredeccessor(root,18)->value;
cout<<endl;
if(Inordersuccessor(root,18)!=-1)
cout<<"Inorder successor : "<<Inordersuccessor(root,18);
    return 0;
}