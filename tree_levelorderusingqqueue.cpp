#include <iostream>
#include<bits/stdc++.h>
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
void pri(node *root)
{
    if (root==NULL)

        return;


    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node * current  = q.front();
        cout<<current->data;
        if(current->left!=NULL){ q.push(current->left);}

        if(current->right!=NULL) {q.push(current->right);}


        q.pop();
    }

}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    pri(root);
    return 0;
}
