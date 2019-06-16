#include <iostream>

using namespace std;
struct Node
{
    int data;
    Node *next;
}*head =NULL;

void inserte(int n)
{
    struct Node *newNode = new Node;
    newNode->data = n;
    newNode->next = head;
    head = newNode;

}
void deletee()
{
    struct Node *ptr = new Node;
    ptr = head;
    head=head->next;
    delete(ptr);

}
void displayu()
{
    if(head==NULL)
    {
        cout<<"List is empty!"<<endl;
        return;
    }
    else
    {
        struct Node *ptr = new Node;
        ptr = head;
        while(ptr!=NULL)
        {
            cout<<ptr->data;
            ptr=ptr->next;
        }
    }

}
int main()
{
    inserte(10);
    displayu();
deletee();
displayu();

}
