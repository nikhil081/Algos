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
void findmin(node *root)
{
    node *current = root;
    while(current->left!=NULL){
        {
            current = current->left;
        }

    }
    cout<<current->data;
}
int main()
{
    node *root = new node(12);
    root->left = new node(10);
    root->right = new node(30);
    root->left->left = new node(8);

    root->right->left = new node(25);
    root->right->right = new node(40);
    findmin(root);
    return 0;
}
