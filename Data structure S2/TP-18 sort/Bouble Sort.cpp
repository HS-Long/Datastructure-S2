#include <iostream>
using namespace std;

void swap(int *a, int *b)
{

    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void BoubleSort(int a1[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (a1[j] > a1[j + 1])
            {
                swap(&a1[j], &a1[j + 1]);
            }
        }
    }
}

void print(int a1[], int size)

{
    for (int i = 0; i < size; i++)
    {
        cout << a1[i] << " ";
    }
}

main()
{
    int a1[] = {3, 5, 6, 1, 9, 7};
    int size = sizeof(a1) / sizeof(a1[0]);
    cout << "Original Array: ";
    print(a1, size);
    cout << "\n\n";
    BoubleSort(a1, size);
    print(a1, size);
    cout << "\n\n";
}