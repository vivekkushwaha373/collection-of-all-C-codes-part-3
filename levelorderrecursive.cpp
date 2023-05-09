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

int Treeheight(node* root)
{
    if(root==NULL)
    {
      return 0;     
    }
    else
    {
        int hl=Treeheight(root->left);
        int hr=Treeheight(root->right);
    
    if(hl>hr)
    return (hl+1);
    else
    return (hr+1);
    }
}
void printcurrentlevel(node* root,int level )
{
    if(root==NULL)
    return ;
    else if(level==0)
    cout<<root->value<<" ";
    else
    {
        printcurrentlevel(root->left,level-1);
        printcurrentlevel(root->right,level-1);
    }
}
levelorder(node*root)
{
    int height=Treeheight(root);
    cout<<"height is: "<<height<<endl;
    for(int level=0;level<height;level++)
    {
        printcurrentlevel(root,level);
    }
}
// int Height(node* root)
int main()
{
node* root=new node(2);
root->left=new node(3);
root->right=new node(4);
root->right->left=new node(5);
root->right->right=new node(6);
root->right->left->left=new node(6);
levelorder(root);
// cout<<"Height of tree is : "<<Treeheight(root);

    return 0;
}
// int Treeheight(node* root)
// {
//     node* temp=NULL;
//     int count=-1;
//     queue<node*>x;
//     x.push(root);
//     x.push(NULL);
//     while(1)
//     {
//       if(x.front()==NULL)
//       {
//         count++;
       
//         x.pop();
//         x.push(NULL);
//         if(x.front()==NULL)
//         {
//           break;
//         }
//       } 
//        temp=x.front();
//        x.pop();
//        if(temp->left!=NULL)
//        x.push(temp->left);
//        if(temp->right!=NULL)
//        x.push(temp->right);
       
//     }
//     //how to find the height of the tree;

//     return count;
// }