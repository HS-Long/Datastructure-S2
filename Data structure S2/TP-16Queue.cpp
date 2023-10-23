#include <iostream>
#include "MyQueue.h"

using namespace std;
int main (){


Q* head = NULL;
enqueue(&head , 10);
enqueue(&head , 20);
enqueue(&head , 30);
enqueue(&head , 40);
printQ(&head);

}

