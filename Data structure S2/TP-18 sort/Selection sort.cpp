#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
void SelectionSort(int a[], int size)
{

    for (int k = 0; k < size - 1; k++)
    {
        int minPosition = k;

        for (int i = k + 1; i < size; i++)
        {
            if (a[i] < a[minPosition])
            {
                minPosition = i;
            }
            swap(&a[minPosition], &a[k]);
        }
    }
}
void printArray(int a[], int size)
{

    for (int k = 0; k < size; k++)
    {
        cout << a[k] << " ";
    }
    cout << "\n\n";
}

main()
{
    int a[] = {506, 511, 517, 514, 400, 521};

    printArray(a, 7);
    SelectionSort(a, 7);
    printArray(a, 7);
}
