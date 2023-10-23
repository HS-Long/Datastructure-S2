#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void Display(Node *ptr)
{
    if (ptr != NULL)
    {
        Display(ptr->left);
        cout << " " << ptr->data << "" ;
        Display(ptr->right);
    }
}

main()
{
     
    struct Node *root = new Node(5);
    
    root->left = new Node(9);
    root->right = new Node(3);
    cout << "Tree Data in Level-1: ";
    Display(root);
    cout << endl;
    root->left->left = new Node(6);
    root->left->right = new Node(2);
    Display(root);
}