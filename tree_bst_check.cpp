#include <iostream>

using namespace std;
class node
{
public:
    int data;
    node *left,*right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;

    }
};

 int bstutil(node *node,int mine,int maxe)
    {
        if(node==NULL)
        {
            return 1;
        }
        if(node->data<mine||node->data>maxe)
        {

            return 0;
        }
        return
        bstutil(node->left,mine,node->data-1)&&bstutil(node->right,node->data+1,maxe);

    }


    int isbst(node *node)
    {
        return bstutil(node,INT_MIN,INT_MAX);
    }

    int main()
    {
        node *root = new node(12);
        root->left = new node(10);
        root->right = new node(30);
        root->right->left = new node(25);
        root->right->right = new node(40);
        cout<<isbst(root);
        return 0;
    }

