#include <iostream>
using namespace std;

// For finding  maximum value in array using iterative method
int MaxI(int arr[], int size)
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
int MaxR(int arr[], int size, int max , int i = 0)
{
    if (i == size)
        return max;
    else
    {
        if (max < arr[i])
        {
            max = arr[i];
            return MaxR(arr, size, max, ++i);
        }
        else
            return MaxR(arr, size, max, ++i);
    }
}

// For finding  minimum value in array using iterative method
int MinI(int arr[], int size)
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
int MinR(int arr[], int size,int min, int i = 0)
{
    if (i == size)
        return min;
    else
    {
        if (min > arr[i])
        {
            min = arr[i];
            return MinR(arr, size, min,++i);
        }
        else
            return MinR(arr, size,min, ++i );
    }
}

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
int SumR(int arr[],int s,int i=0,int sum=0){
    if (i==s)
        return sum;
    else{
        sum+=arr[i];
        return SumR(arr,s,++i,sum);
    }
}

// Binary search  using iteratinve
int IBinarySearch(int A[], int s, int key)
{
    int l = 0;
    int h = s - 1;
    int mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
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
int RBinarySearch(int A[], int l, int h, int key)
{
    if (l <= h)
    {
        int mid = (l + h) / 2;
        if (key == A[mid])
            return mid;
        else if (key < A[mid])
            return RBinarySearch(A, l, mid - 1, key);
        else
            return RBinarySearch(A, l + 1, h, key);
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
        return first;
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
int main(){
    cout<<"Create array ->\n";
    int size;
    cout<<"Enter size of array :";
    cin>>size;
    int Array[size];
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter value : ";
        cin>>Array[i];
    }
    cout<<"Array's elements are :";
    for (int i = 0; i < size; i++)
    {
        cout<<Array[i]<<" ";
    }
    
    cout << endl;
    int choice;
    do
    {
        cout << "1 - Linear search in array   \n";
        cout << "2 - Binary  search in array  \n";
        cout << "3 - Find maximum value in array  \n";
        cout << "4 - Find minimum value in array  \n";
        cout << "5 - Find sum of  elements of array  \n";
        cout << "6 - Sort array using Insertion  sort \n";
        cout << "7 -  Reverse an array  \n";
        cout << "q for exit \n";
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice){
        case 1: {
            int key;
            cout << "Enter number you want to find :";
            cin >> key;
            int i = ILinearSearch(Array, size, key);
            int j = RLinearSearch(Array, 0, size - 1, key); // here n-1 is last index of array
            if (i == -1 && j == -1)
                cout << "Number number not found !! \n";
            if (i != -1)
                cout << "Number found at index(Iterative linear search) " << i << endl;
            if (j != -1)
                cout << "Number found at index(Recursive linear search) " << j << endl;
            break;
        }
        case 2:{
            int k;
            cout << "Enter number you want to find :";
            cin >> k;
            InsertionSort(Array,size);
            int i = IBinarySearch(Array, size, k);
            int j = RBinarySearch(Array, 0, size - 1, k); // here n-1 is last index of array
            if (i == -1 && j == -1)
                cout << "Number number not found !! \n";
            if (i != -1)
                cout << "Number found at index(Iterative Binary search) " << i << endl;
            if (j != -1)
                cout << "Number found at index(Recursive Binary search) " << j << endl;
            break;
        }
        case 3:{
            cout << "Maximum value of Array(Iterative) = " << MaxI(Array, size) << endl;
            cout << "Maximum value of Array(Recursive) = " << MaxR(Array, size,Array[0]) << endl;
            break;
        }
        case 4:{
            cout << "Minimum value of Array(Iterative) = " << MinI(Array, size) << endl;
            cout << "Minimum value of Array(Recursive) = " << MinR(Array, size,Array[0]) << endl;
            break;
        }
        case 5:{
            cout << "Sum of values of Array (Iterative) = " << SumI(Array, size) << endl;
            cout << "Sum of values of Array (Recursive) = " << SumR(Array, size) << endl;
            break;
        }
        case 6:{
            InsertionSort(Array, size);
            break;
        }
        case 7:{
            Reverse(Array, size);
            cout<<"Array after reversing \n";
            for (int i = 0; i < size; i++)
            {
                cout << Array[i] << " ";
            }
            cout << endl;
            break;
        }
        }
        cout<<endl;
    } while (0 < choice <= 7);
    return 0;
}