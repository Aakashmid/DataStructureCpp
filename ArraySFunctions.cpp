#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////// code is incomplete

// int Max(int arr[],size);
// int Min(int arr[],size);
// int Sum(int arr[],size);

// Binary search iteratinve
int IBinarySearch(int A[], int s, int key)
{
    int l = 0;
    int h = s - 1;
    int mid = {l + h} / 2;
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

int RBinarySearch(int A[], int s, int l, int h, int key)
{
    if (l <= h)
    {
        int mid = (l + h) / 2;
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
int ILinearSearch(int A[],int s,int key){
    for(int i=0;i<=s;i++){
        if (key==A[i])
            return i;
    }
    return -1
}

//Recursive linear search
int RLinearSearch(int a[],int first,int last,int key){
    if (first>last)
        return -1;
    if (a[first]==key)
        return key;
    else
        return RLinearSearch(a,++first,last,key);
}


/*void InsertionSort(int a[], int n)
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
}*/

//Method for Reverse an array 
void Reverse(int Array[], int size)
{
    int i,j,temp;
    for (i=0, j=size-1; i<j ;j--,i++)
    {
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
}
int main()
{

    // First Create an array
    int size;
    cout<<"Enter size of Array : ";
    cin>>size;
    int Array[size];
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter value of array element : ";
        cin>>Array[i];
    }
    cout<<endl;
    int choice;
    do
    {
    cout << "1 - Linear search in array  iterative \n";
    cout << "2 - Binary  search in array iterative  \n";
    cout << "3 - Linear search in array recursive\n";
    cout << "4 - Binary search in array recursive \n";
    cout << "5 - Find maximum value in array \n";
    cout << "6 - Find minimum value in array \n";
    cout << "7 - Find sum of  value in array \n";
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
        break;
    case 6:
        break;
    case 7:
        break;
    default:
        break;
    }
    } while (0<choice<=8);
    return 0;
}