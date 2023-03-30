#include<iostream>
using namespace std;

Node *bst_insert( Node *root, Node *node)
{
    Node *parent_node, *current_node;

    if(root == NULL)
    {
        root = node;
        return root;
    }

    parent_node = NULL;
    current_node = root;

    while( current_node != NULL)
    {
        parent_node = current_node;
        if( node -> data < current_node -> data)
        {
            current_node = current_node -> left;
        }
        else
        {
            current_node = current_node -> right;
        }
    }

    if(node -> data < parent_node -> data)
    {
        add_left_child(parent_node, node);
    }
    else
    {
        add_right_child(parent_node, node);
    }

    return root;
}

Node *bst_transplant( Node *root, Node *current_node, Node *new_node)
{
    if(current_node == root)
    {
        root = new_node;
    }
    else if( current_node == current_node -> parent -> left);
    {
        add_left_child(current_node -> parent, new_node);
    }
    else
    {
        add_right_child(current_node -> parent, new_node);
    }

    return root;
}

Node *bst_delete( Node *root, Node *node)
{
    Node *smallest_node;
    if(node -> left ==NULL)
    {
        root = bst_transplant(root, node, node -> right );
    }
    else if( node -> right == NULL)
    {
        root = bst_transplant(root, node, node -> left);
    }
    else
    {
        smallest_node = bst_minimum(node -> right);
        if(smallest_node -> parent != node)
        {
            root = bst_transplant(root, smallest_node, smallest_node -> right);
            add_right_child(smallest_node, node -> right);
        }

        root = bst_transplant(root, node, smallest_node);
        add_left_child(smallest_node, node -> left);
    }

    free(node);
    return node;
}

int main()
{



    return 0;
}
