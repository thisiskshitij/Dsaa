#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *temp = new node(val);
    temp->next = head;
    head = temp;
}

void display(node *head)
{
    node *temp = head;
    while (head != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    node *head = NULL;
    insertAtHead(head, 10);
    insertAtHead(head, 10);
    insertAtHead(head, 10);
    insertAtHead(head, 10);
    insertAtHead(head, 10);
    insertAtHead(head, 10);

    display(head);
}
