#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////// code is incomplete

// For finding  maximum value in array using iterative method
int MaxI(int arr[],int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

// For finding  maximum value in array using Recursive method
// int MaxR(int arr[],int size,int max=arr[0]){
//     if (size==1){
//         return max;
//     }
//     else{
//         if(arr[size-1]>max){
//             max=arr[size-1];
//             return max=MaxR(arr,size-1,max);
//         }
//     }
// }

// For finding  minimum value in array using iterative method
int MinI(int arr[],int  size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
// For finding  minimum value in array using Recursive method

// For finding  sum of all values in array using iterative method
int SumI(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

// For finding  sum of value in array using Recursive method

// Binary search  using iteratinve
int IBinarySearch(int A[], int s, int key)
{
    int l = 0;
    int h = s - 1;
    int mid = (l + h)/ 2;
    while (l <= h)
    {
        if (key == A[mid])
            return mid;
        else if (key < A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
// Binary search using recursive
int RBinarySearch(int A[], int s, int l, int h, int key)
{
    if (l <= h)
    {
        int mid = (l+h)/2;
        if (key == A[mid])
            return mid;
        else if (key <= A[mid])
            return RBinarySearch(A, s, l, mid - 1, key);
        else
            return RBinarySearch(A, s, l + 1, h, key);
    }
    return -1;
}

// Iterative linear search
int ILinearSearch(int A[], int s, int key)
{
    for (int i = 0; i <= s; i++)
    {
        if (key == A[i])
            return i;
    }
    return -1;
}

// Recursive linear search
int RLinearSearch(int a[], int first, int last, int key)
{
    if (first > last)
        return -1;
    if (a[first] == key)
        return key;
    else
        return RLinearSearch(a, ++first, last, key);
}

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
    }
    // Printing sorted array
    cout << "Sorted Array is  : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    cout << "\n";
}

// Method for Reverse an array
void Reverse(int A[], int size)
{
    int i, j, temp;
    for (i = 0, j = size - 1; i < j; j--, i++)
    {
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
}
int main()
{

    // First Create an array
    cout<<"Create an Array -> \n";
    int n=6;
    // cout << "Enter size of Array : ";
    // cin >> n;
    int Array[6]=[1,2,5,3,9,6];
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Enter value of array element : ";
    //     cin >> Array[i];
    // }
    cout << endl;
    int choice;
    do
    {
        cout << "1 - Linear search in array  using iterative method \n";
        cout << "2 - Linear  search in array using recursive method  \n";
        cout << "3 - Binary  search in array using iterative method \n";
        cout << "4 - Binary search in array  using recursive method \n";
        cout << "5 - Find maximum value in array using iterative method \n";
        cout << "6 - Find maximum value in array using recursive method \n";
        cout << "7 - Find minimum value in array using iterative method \n";
        cout << "8 - Find minimum value in array using recursive method \n";
        cout << "9 - Find sum of  value in array using iterative method \n";
        cout << "10 - Find sum of value in array using recursive method  \n";
        cout << "11 - Sort array using Insertion  sort \n" ;
        cout << "12 -  Reverse an array  \n" ;
        cout<<"q for exit \n";
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            cout<<"Maximum value in array : "<<MaxI(Array,n)<<" \n";
            break;
        case 6:
            break;
        case 7:
            cout<<"Minimum value in array : "<<MinI(Array,n)<<" \n";
            break;
        case 8:
            
            break;
        case 9:
            cout<<"Sum of values in array : "<<SumI(Array,n)<<" \n";
            break;
        case 10:
            break;
        case 11:
            InsertionSort(Array,n);
            break;
        case 12:
            Reverse(Array,n);
            break;
        default:
            break;
        }
        cout<<"\n";
    } while (0 < choice <= 11);
    return 0;
}