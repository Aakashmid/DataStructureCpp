// Sort the given array using insertion sort and show the content of array after every pass
#include <iostream>
using namespace std;
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
        a[j + 1] = temp;
        cout<<"Array at "<<i<<"  pass -> ";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout<<"\n";
    }

    // print sorted array
}

int main()
{
    int myarr[]={34,56,12,8,92,9,44,23};
    InsertionSort(myarr,8);
    return 0;
}