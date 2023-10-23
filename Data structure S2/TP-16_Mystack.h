#ifndef TP -16_MYSTACK_H_INCLUDED
#define TP -16_MYSTACK_H_INCLUDED

#include <iostream>
using namespace std;
// create stack of linked list
struct stackNode
{
    int data;
    struct stackNode *next;
};
/*bool isEmpty (stackNode* head) {  // check stack is empty
    return !head;                 // (head) = true => !head = !true = !(!=NULL)
}*/
void push(stackNode **head_ref, int new_data)
{                                      // add new element
    stackNode *temp = new stackNode(); // ​ការ​បញ្ចូល​  linklist nv khang muk
    temp->data = new_data;
    temp->next = (*head_ref);
    (*head_ref) = temp;
}
bool isEmpty(stackNode *head)
{                 // check stack is empty
    return !head; // (head) = true => !head = !true = !(!=NULL)
}
int pop(stackNode **head_ref)
{ // Remove an element
    if (isEmpty(*head_ref))
        return INT_MIN;
    stackNode *temp = *head_ref;
    *head_ref = (*head_ref)->next;
    int popped = temp->data;
    return popped;
}

bool isFull()
{ // check stack is full
    // never full with linked list
    return false;
}
int peek(stackNode *head)
{ // get value of head element
    if (isEmpty(head))
        return INT_MIN;

        return head->data;
}
void printstackNodes(stackNode *head)
{
    cout << "Stack Node(s) : \n ";
    for (stackNode *n = head; n != NULL; n = n->next)
    {
        cout << "Node : " << n->data << endl;
    }
}

#endif // TP-016_MYSTACK_H_INCLUDED
