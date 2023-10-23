#ifndef MyQueue_H_INCLUDED
#define MyQueue_H_INCLUDED
#include<iostream>
using namespace std;

struct Q
{

    int data;
    struct Q *next;
};

Q *front_q = NULL;
Q *rear_q = NULL;

bool isEmpty(Q *head)
{

    return !head; // head = NULL => head = false;
}
bool isfull()
{

    return false; // head = NULL => head = true;
}

void enqueue(Q **head_ref, int new_data)
{

    Q *new_node = new Q();

    if (rear_q == NULL)
    {
        new_node->data = new_data;
        new_node->next = NULL;
        *head_ref = new_node;
        front_q = rear_q = *head_ref;
    }
    else
    { // next Element

        new_node->data = new_data;
        new_node->next = *head_ref;
        *head_ref = new_node;
        rear_q = new_node;
    }
}

int dequeue(Q **head_ref)
{
    Q *temp = new Q();

    if (front_q == NULL)

        cout << "Queue is underflow" << endl ;
        return INT_MIN;

    else 
    {  
        
         temp = temp -> next;
         free(front_q);
         front_q =
         (&head_ref) = temp;
         front_q = temp;
        int deleted = temp->next;
        return deleted;
    }
}

int peek(Q *head)
{
    Q *head = new Q();
    if (isEmpty(head))
        return INT_MIN;

    return head->data;
}

void printQ(Q *head)
{

    cout << "\nDisplay All Queues Element: " << endl;
    for (Q *n = head; n != NULL; n = n->next)
    {
        cout << "Q-Node: " << n->data << endl;
    }
    cout << "\n";
}
#endif
