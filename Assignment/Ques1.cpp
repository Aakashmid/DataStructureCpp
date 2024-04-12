#include <iostream>
using namespace std;

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
    // c is count Array //assigning every value of array c to zero
    int c[k + 1] = {0};
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
    //Assigning sorted array value to original array
    for (int i = 0; i < 7; i++)
    {
        a[i]=SortedArr[i];
    }
}
int main()
{
    int A[] = {6, 0, 2, 0, 6, 3, 2};
    CountSort(A, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}