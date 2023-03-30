#include<iostream>
using namespace std;

typedef struct node Node;
{
    struct node
    {
        int data;
        Node *left;
        Node *right;
    };
}

Node *create_node(int item)
{
    Node *new_node = (Node *) malloc(sizeof(Node));
    if(new_node == NULL)
    {
        cout<< "Error! could not creat a new node\n";
        exit(1);
    }

    new_node -> data = item;
    new_node -> left = NULL;
    new_node -> right = NULL;

    return new_node;
}

void add_left_child( Node *node, Node *child)
{
    node -> left = child;
}

void add_right_child( Node *node, Node *child)
{
    node -> right = child;
}

Node *create_tree()
{
    Node *two = create_node(2);
    Node *seven = create_node(7);
    Node *nine = create_node(9);
    add_left_child( two, seven);
    add_right_child( seven, six);

    return two;
}

// traversing

void pre_order( Node *node )
{
    cout<< node -> data;

    if(node -> left != NULL)
    {
        pre_order(node -> left);
    }
    if(node -> right != NULL)
    {
        pre_order(node -> right);
    }
}

void post_order( Node *node)
{
    if(node -> left != NULL)
    {
        post_order( node -> left);
    }
    if(node -> right != NULL)
    {
        post_ordewr( node -> right);
    }
}

void in_order( Node *node)
{
    if( node -> left != NULL)
    {
        in_order( node -> left);
    }
    cout<< node -> data;

    if( node -> right != NULL)
    {
        if(node -> right != NULL)
        {
            in_order(node -> right);
        }
    }
}

int main
{
     Node *root = create_tree();

     cout<< root -> data;


     Node *root = create_tree();

     pre_order(root);
     cout<<endl;

    return 0;
}
