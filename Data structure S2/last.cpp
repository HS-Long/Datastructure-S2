#include <iostream>
#include <string>

using namespace std;

struct Student
{
  string first_Name  ,  major , gender , phone_number , last_Name;
  int id;

};

struct Node
{
  Student data;
  Node *left;
  Node *right;
};

Node *root = NULL;

void insertTree(Student data)
{
  Node *newNode = new Node();
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;

  Node *cur = root;
  Node *Parents = NULL;

  while (cur != NULL)
  {
    Parents = cur;
    if (data.id < cur->data.id)
    {
      cur = cur->left;
    }
    else
    {
      cur = cur->right;
    }
  }

  if (Parents == NULL)
  {
    root = newNode;
  }
  else if (data.id < Parents->data.id)
  {
    Parents->left = newNode;
  }
  else
  {
    Parents->right = newNode;
  }
}

void inorder(Node *node)
{
  if (node != NULL)
  {
    inorder(node->left);
    cout << node->data.first_Name << " " << node->data.last_Name << " " << node->data.id << endl;
    inorder(node->right);
  }
}

void search(int id)
{
  Node *cur = root;

  while (cur != NULL)
  {
    if (id == cur->data.id)
    {
      cout << cur->data.first_Name << " " << cur->data.last_Name << " " << cur->data.id << endl;
      return;
    }
    else if (id < cur->data.id)
    {
      cur = cur->left;
    }
    else
    {
      cur = cur->right;
    }
  }

  cout << " ID Student not found" << endl;
}

int main()
{
  Student stun[10];

  cout << "\t 1. Add 10 infor of your friend to the three.\n";
  for (int k = 0; k <= 9; k++)
  {

    cout << "Enter first name student: ";
    cin >> stun[k].first_Name;
    cout << "Enter last name student: ";
    cin >> stun[k].last_Name;
    cout << "Enter gender of student: ";
    cin >> stun[k].gender;
    cout << "Enter ID of student: ";
    cin >> stun[k].id;
    cout << "Enter Major of student: ";
    cin >> stun[k].major;
    cout << "Enter Phone number of student: ";
    cin >> stun[k].phone_number;
    insertTree(stun[k]);
  }

  cout << "\t 2. Display data using inorder traversal.\n"
       << endl;
  inorder(root);
  cout << "\t 3. Serch for a student based on his/her student ID.\n";
  int student_id;
  cout << "Enter student ID to search: ";
  cin >> student_id;
  search(student_id);

  return 0;
}
