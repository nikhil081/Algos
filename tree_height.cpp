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
int findheight(node * node)
{
    if(node==NULL)
    {
        return 0;
    }
    int lh = findheight(node->left);
    int rh = findheight(node->right);
    if(lh>rh)
        return (lh+1);
    else
        return(rh +1);
}

int main()
{
    node *root = new node(12);
    root->left = new node(10);
    root->right = new node(30);
    root->right->left = new node(25);
    root->right->right = new node(40);
    cout<<findheight(root);
    return 0;
}
