#include <iostream>

using namespace std;

struct Node
{
    int key;
    struct Node *left, *right;
};
struct Node *newnode(int);
void inorder(struct Node *);
struct Node *insertNode(struct Node *, int);
struct Node *minValue(struct Node *);
struct Node *deleteNode(struct Node *, int);

main()
{
    struct Node *root = NULL;
    root = insertNode(root, 1);
    insertNode(root, 30);
    insertNode(root, 40);
    insertNode(root, 80);
    insertNode(root, 100);

    inorder(root);

    cout << "Delete 100 " << endl;
    deleteNode(root, 100);
    cout << "\n\n"
         << endl;
    inorder(root);
}

struct Node *newnode(int item)
{
    struct Node *temp = new Node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}
struct Node *insertNode(struct Node *root, int key)
{
    if (root == NULL)
    {
        return newnode(key);
    }

    if (key < root->key)
    {
        root->left = insertNode(root->left, key);
    }
    else if (key > root->key)
    {
        root->right = insertNode(root->right, key);
    }
    return root;
}
struct Node *minValue(struct Node *root)
{

    return root;
}
struct Node *deleteNode(struct Node *root, int key)
{
    if (root == NULL)
        return root;
    if (key < root->key)
    {
        root->left = deleteNode(root->left , key);
    }
    else if (key > root->key)
    {
        root->right = deleteNode(root->right ,key);
    }
    if (root->left == NULL)
    {
        struct Node *temp = root->right;
        free(root);
        return temp;
    }
    else if (root->right == NULL)
    {
        struct Node *temp = root->left;
        free(root);
        return temp;
    }

    return root;
}
