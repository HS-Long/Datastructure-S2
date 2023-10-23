#include <iostream>

using namespace std;

main()
{

    cout << " =======***** TP-14 Pointer ******=========\n";
    cout << " ======Problem-01=========\n\n";

    int n1 = 7;
    int n2 = 3;

    int *p1, *p2;

    p1 = &n1;
    p2 = &n2;
    cout << "Display memory address \n";

    cout << " Address of n1 through p1: " << p1 << endl;
    cout << " Address of n2 through p2: " << p2 << endl;

    cout << "Display value of pointer \n";

    cout << " Value of n1 through p1: " << *p1 << endl;
    cout << " Value of n2 through p2: " << *p2 << endl;

    cout << "\n\n";
    cout << "End-Problem-01";
}
#include <iostream>

using namespace std;

main()
{
    cout << " =======***** TP-14 Pointer ******=========\n";
    cout << " ======Problem-02=========\n\n";

    int n, *pn;

    cout << "Input value of n: ";
    cin >> n;

    pn = &n;

    cout << " The result of pointer instean n = " << n << " + 5 = ";
    *pn = *pn + 5;
    cout << *pn;

    cout << "\n\n";
    cout << "End-Problem-02";
}

#include <iostream>

using namespace std;

void exchange(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    cout << " The result of a = " << *a << endl;
    cout << " The result of b = " << *b << endl;
}

main()
{
    cout << " =======***** TP-14 Pointer ******=========\n";
    cout << " ======Problem-03=========\n\n";
    int a, b;

    cout << "Input value of a: ";
    cin >> a;
    cout << "Input value of b: ";
    cin >> b;

    exchange(&a, &b);

    cout << "\n\n";
    cout << "End-Problem-03";
}

#include <iostream>

using namespace std;

void findMaxMin(int number[], int *Maxx, int *Minn)
{

    for (int i = 0; i < 7; i++)
    {
        *Maxx = number[0];
        *Minn = number[0];

        if (*Maxx < number[i])
        {
            *Maxx = number[i];
        }
    }
    for (int i = 0; i < 7; i++)
    {
        if (*Minn > number[i])
        {
            *Minn = number[i];
        }
    }
}

main()
{
    cout << " =======***** TP-14 Pointer ******=========\n";
    cout << " ======Problem-04=========\n\n";
    int Max, Min;

    int num[7];
    for (int i = 0; i < 7; i++)
    {
        cout << "Element-" << i + 1 << " = ";
        cin >> num[i];
    }
    findMaxMin(num, &Max, &Min);
    cout << Min << endl;
    cout << Max << endl;
    cout << "\n\n";
    cout << "End-Problem-03";
}

#include <iostream>

using namespace std;

void sumProducet(int *parray, int *sum, int *producet, int size);

int main()
{

    cout << " =======***** TP-14 Pointer ******=========\n";
    cout << " ======Problem-05=========\n\n";
    int array[] = {4, 1, 2, 3, 4, 5, 6};
    int *parray = array;
    int sum = 0, producet = 1;

    sumProducet(parray, &sum, &producet, 7);
    cout << "sum Element: " << sum << endl;
    cout << "Multiple Element: " << producet << endl;

    cout << "\n\n";
    cout << "End-Problem-05";
}

void sumProducet(int *parray, int *sum, int *producet, int size)
{

    if (size == 0)
    {
        return;
    }
    else
    {
        *sum += *parray;   // *sum = *sum + *parray
        *producet *= *parray;
        sumProducet(parray + 1, sum, producet, size - 1);
    }
}
#include <iostream>

using namespace std;

void sum1(double *sum, int n);
double sum2(int n);

int main()
{

    cout << " =======***** TP-14 Pointer ******=========\n";
    cout << " ======Problem-06=========\n\n";
    double result;

    cout << "Sumation of 1 / 1^2 + 1 / 2^2 + ...... + 1 / 5^2 " << endl;
    sum1(&result, 5);
    cout << "\n Sumatoin = " << result << endl;
    result = sum2(5);
    cout << "Some is " << result;
    cout << "\n\n";
    cout << "End-Problem-05";
}

void sum1(double *sum, int n)
{

    for (int i = 0; i <= n; i++)
    {
        *sum += 1.0 / (i * i);
    }
}
double sum2(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return 1.0 / (n * n) + sum2(n - 1);
    }
}
