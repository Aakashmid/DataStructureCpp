#include <iostream>
using namespace std;

// Insertion sort
void InsertionSort(int a[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (a[j] > temp)
            {
                a[j + 1] = a[j];
            }
            else
            {
                break;
            }
        }
        a[j+1] = temp;
    }

    // print sorted array
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

//  Count Sort
void CountSort(int a[], int n)
{
    int k = a[0];
    int SortedArr[n];
    // Finding maximum value in array which going to be stored in "k"
    for (int i = 0; i < n; i++)
    {
        if (k < a[i])
        {
            k = a[i];
        }
    }
    int c[k + 1] = {0}; // c is count Array //assigning every value of array to zero
    for (int i = 0; i < n; i++)
    {
        c[a[i]] += 1;
    }
    
    for (int i = 1; i <= k; i++)
    {
        c[i] = c[i] + c[i - 1];
    }

    for (int j = n - 1; j >= 0; j--)
    {
        c[a[j]] -= 1;
        SortedArr[c[a[j]]] = a[j];
    }

    // Printing sorted array
    for (int i = 0; i < n; i++)
    {
        cout << SortedArr[i] << " ";
    }
}
int main()
{
    int MyArr[] = {2,5,4,1,3};
    int size = sizeof(MyArr) / sizeof(MyArr[0]);
    CountSort(MyArr, size);
    // InsertionSort(MyArr, size);
    return 0;
}