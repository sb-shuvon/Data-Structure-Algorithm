#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void push( Node **head, int new_data )
{
    Node* new_node =  new Node();

    new_node -> data = new_data;

    new_node -> next = (*head);

    (*head) = new_node;

}

void insertAfter( Node* prev_node, int new_data)
{
    if( prev_node == NULL )
    {
        cout<< "The given previous node cannot be NULL";
        return;
    }

    Node* new_node = new Node();

    new_node -> data = new_data;

    new_node -> next = prev_node -> next;

    prev_node -> next = new_node;

}

void append ( Node** head, int new_data)
{
    Node* new_node = new Node();



    new_node -> data = new_data;

    new_node -> next = NULL;

    if( *head == NULL)
    {
        *head = new_node;
        return;
    }

    while( last -> next != NULL)
    {
        last = last -> next;
    }

    last -> next = new_node;
    return;

    Node *last = *head;

}

void traversList(Node *node)
{
    while( node != NULL)
    {
        cout<< " "<< node -> data;
        node = node -> next;
    }
}

int main()
{
    Node* head = NULL;

    append( &head, 6);

    push( &head, 7);

    push ( &head, 1);

    append (& head, 4);

    insertAfter( head -> next, 8);

    cout<< "Created Linked list is : ";
    traversList(head);


    return 0;
}
