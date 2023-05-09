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
int Treeheight(node* root)
{
    node* temp=NULL;
    int count=-1;
    queue<node*>x;
    x.push(root);
    x.push(NULL);
    while(1)
    {
      if(x.front()==NULL)
      {
        count++;
       
        x.pop();
        x.push(NULL);
        if(x.front()==NULL)
        {
          break;
        }
      } 
       temp=x.front();
       x.pop();
       if(temp->left!=NULL)
       x.push(temp->left);
       if(temp->right!=NULL)
       x.push(temp->right);
       
    }
    //how to find the height of the tree;

    return count;
}
int main()
{
node* root=new node(2);
root->left=new node(3);
// root->left->left=new node(6);
// root->left->right=new node(10);
root->right=new node(4);
root->right->left=new node(5);
root->right->right=new node(6);
root->right->left->left=new node(6);

cout<<"Height of tree is : "<<Treeheight(root);

    return 0;
}