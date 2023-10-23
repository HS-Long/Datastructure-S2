#include <iostream>

using namespace std;

struct Node
{
    string data;
    Node *next;
};

main()
{

    cout << "==========****TP-15****========\n";
    cout << "==========****Problem-01****========\n\n";

    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = "2";
    head->next = second;

    second->data = "3";
    second->next = third;

    third->data = "4";
    third->next = NULL;

    Node *n = head;

    while (n != NULL)
    {
        if (n->next == NULL)
        {
            cout << n->data << endl;
        }
        else
        {
            cout << n->data << " -> ";
        }
        n = n->next;
    }
    cout << "\n\n";
    cout << "===========****END****=============";
}

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void push(Node **head_ref, int new_data)
{
    // add data to tail
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
Node *removeLastnode(Node *head)
{
    // remove last node
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }

    Node *second_last = head;
    while (second_last->next->next != NULL)
    {
        second_last = second_last->next;
    }
    delete (second_last->next);
    second_last->next = NULL;
    return head;
}
main()
{
    cout << "==========****TP-15****========\n";
    cout << "==========****Problem-02****========\n\n";

    Node *head = NULL;
    push(&head, 12);
    push(&head, 16);
    push(&head, 20);
    push(&head, 14);
    push(&head, 62);

    for (Node *n = head; n != NULL; n = n->next)
    {

        cout << n->data << " -> ";
    }

    head = removeLastnode(head);
    for (Node *n = head; n != NULL; n = n->next)
    {
        cout << n->data << " -> ";
    }
}

#include <iostream>

using namespace std;

struct Element
{

    int data;
    Element *next;
};

struct List
{

    int s;
    Element *head;
    Element *tail;
};
List *creatEmptylist()
{
    List *L1;
    L1 = new List;
    L1->s = 0;
    L1->head = NULL;
    L1->tail = NULL;
    return L1;
}
void add_data_to_end(List *L1, int newdata)
{

    Element *t;
    t = new Element;
    t->data = newdata;
    t->next = NULL;
    if (L1->s == 0)
    {
        L1->head = t;
        L1->tail = t;
    }
    else
    {

        L1->tail->next = t;
        L1->tail = t;
    }
    L1->s = L1->s + 1;
}
void add_data_to_beginning(List *L1, int newdata)
{

    Element *t;
    t = new Element;
    t->data = newdata;
    if (L1->s == 0)
    {
        t->next = NULL;
        L1->tail = t;
    }
    else
    {

        t->next = L1->head;
        L1->tail = t;
    }
    L1->head = t;
    L1->s = L1->s + 1;
}
void DisplayList(List *L1)
{

    Element *t;
    t = L1->head;
    while (t != NULL)
    {

        cout << t->data << " ";
        t = t->next;
    }
}

main()
{
    cout << "==========****TP-15****========\n";
    cout << "==========****Problem-03****========\n\n";
    List *mylist1;
    mylist1 = creatEmptylist();

    add_data_to_beginning(mylist1, 7);
    add_data_to_beginning(mylist1, 1);
    DisplayList(mylist1);
    add_data_to_end(mylist1, 0);
    add_data_to_end(mylist1, 4);
    DisplayList(mylist1);
    cout << "\n\n";
    cout << "===========****END****=============";
}

#include <iostream>

using namespace std;

// create linked list to store students' ID
// linked list data structure
// create structure element
struct Element
{
    string data;
    string name;
    float score;
    Element *next;
};

struct list
{
    int s;
    Element *head;
    Element *tail;
};

list *createEmpryList()
{
    list *l = new list;
    l->s = 0;
    l->head = NULL;
    l->tail = NULL;
    return l;
}

void addID_end(list *l, string id, string name, float score)
{
    Element *e = new Element;
    e->data = id;
    e->name = name;
    e->score = score;
    e->next = NULL;
    if (l->s == 0)
    {
        l->head = e;
    }
    else
    {
        l->tail->next = e;
    }
    l->tail = e;
    l->s++;
}

// display all elements in the list
void displayList(list *l)
{
    Element *e = l->head;
    while (e != NULL)
    {
        cout << "Id Student : " << e->data << " Student name : " << e->name << " Score of student : " << e->score << endl;
        e = e->next;
    }
}

main()
{
    cout << "==========****TP-15****========\n";
    cout << "==========****Problem-04****========\n\n";
    list *l = createEmpryList();
    // menu

    int option;
    string id, name;
    float score;
    do
    {
        cout << "===================MENU==================" << endl;
        cout << "0. Exit" << endl;
        cout << "1. Add new student" << endl;
        cout << "2. Display all student" << endl;
        cout << "Enter your option : ";
        cin >> option;

        // cases
        if (option == 0)
            break;
        switch (option)
        {
        case 1:
            cout << "1. Add new student" << endl;
            cout << "enter student ID : ";
            cin >> id;
            cout << "Enter Name student: ";
            cin >> name;
            cout << "Enter score of student: ";
            cin >> score;
            addID_end(l, id, name, score);

            break;
        case 2:
            cout << "2. Display all student" << endl;
            cout << "student list : " << endl;
            displayList(l);
            break;
        }
    } while (option != 0);
    cout << "\n\n";
    cout << "===========****END****=============";
}

#include <iostream>

using namespace std;

struct Element
{

    int Number;
    Element *next;
};
struct List
{

    int s;
    Element *head;
    Element *tail;
};

List *creatEmptyList()
{
    List *list = new List;
    list->s = 0;
    list->head = NULL;
    list->tail = NULL;
    return list;
}

void Insert_number(List *list, int number)
{
    Element *e = new Element;
    e->Number = number;
    e->next = NULL;
    if (list->s == 0)
    {

        list->head = e;
    }
    else
    {

        list->tail->next = e;
    }
    list->tail = e;
    list->s++;
}
void Display_number(List *list)
{
    Element *e = list->head;
    while (e != NULL)
    {

        cout << e->Number << " -> ";
        e = e->next;
    }
}
int Display_summation(List *list)
{
    Element *e = list->head;
    float sum = 0.0;
    while (e != NULL)
    {
        sum += e->Number;
        e = e->next;
    }

    return sum;
}
main()
{

    List *list = creatEmptyList();
    int option;

    int n;
    do
    {

        cout << "please input number(input 0 the code is stopid) : ";
        cin >> n;
        Insert_number(list, n);

    } while (n != 0);
    Display_number(list);
    cout << " \nThe summation = " << Display_summation(list) << endl;
}