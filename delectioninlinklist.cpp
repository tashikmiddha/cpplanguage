#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void inserttail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void inserthead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
}
void delection(node* &head,int val)
{
    node* temp=head;
    while(temp->next ->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;;
    temp->next=temp->next->next;
    delete todelete;
}

int main()
{
    node *head = NULL;
    inserttail(head, 1);
    inserttail(head, 2);
    inserttail(head, 3);
    display(head);
    delection(head,3);
    display(head);
    return 0;
}