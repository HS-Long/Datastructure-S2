#include <iostream>
#include "TP-16_Mystack.h"
using namespace std;

int main()
{
    cout << "========*** TP-16 ***=======\n";
    cout << "Problem=-1: ================\n";
    stackNode *head = NULL;

    push(&head, 10);
    push(&head, 20);
    push(&head, 30);
    printstackNodes(head);

    
    cout << "Remove the top element from stack:\n";
    cout << "Remove element from stack is :" << pop(&head) << endl;
    printstackNodes(head);
    cout << "\nThe Top Element is: " << peek(head) << endl;
    cout << "\n\n";
    cout << "End problem-01:=============\n";
    return 0;
}