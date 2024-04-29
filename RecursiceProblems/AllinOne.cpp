#include <iostream>
using namespace std;
// Rescursive functions

int Factorial(int num)
{
    if (num == 1 || num == 0)
        return 1;
    else
        return num * Factorial(num - 1);
}

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int GCD(int n1, int n2)
{
    if (n1 == n2)
        return n1;
    else
    {
        if (n1 > n2)
            return GCD(n1 - n2, n2);
        else
            return GCD(n1, n2 - n1);
    }
}

int Pow(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    else
    {
        return base * Pow(base, exp - 1);
    }
}

void reverse(int A[], int l, int h)
{
    if (l < h)
    {
        int temp = A[l];
        A[l] = A[h];
        A[h] = temp;
        reverse(A, l + 1, h - 1);
    }
}
int main()
{
    cout << "Name - Aakash Kumar Jha \n";
    int choice;
    do
    {
        cout << "Choose operation you want to do \n";
        cout << "1 for Factorial of a number \n";
        cout << "2 for Nth fibonacci number \n";
        cout << "3 for GCD of a number \n";
        cout << "4 for Power of a number \n";
        cout << "5 for reverse a Array  \n";
        cout << "Enter your choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int n;
            cout << "Enter number whose factorial you want : ";
            cin >> n;
            cout << "Factorial  of " << n << " is = " << Factorial(n);
            break;
        }
        case 2:
        {
            int n;
            cout << "Enter term whose fibonacci number you want : ";
            cin >> n;
            cout << "Fibonacci number of term " << n << " : " << fibonacci(n);
            break;
        }
        case 3:{
            int num1, num2;
            cout << "Enter first number : ";
            cin >> num1;
            cout << "Enter second number : ";
            cin >> num2;
            cout << "Greatest common divisor of both number you entered is : " << GCD(num1, num2);
            break;
        }
        case 4:{
            int base, exp; // n is base and e is its exponential
            cout << "Enter base value :  ";
            cin >> base;
            cout << "Enter exponential value :  ";
            cin >> exp;
            cout << base << "^" << exp << " = " << Pow(base, exp);
            break;
        }
        case 5:{
            int Arr[8] = {2, 4, 6, 1, 8, 4, 6, 7};
            reverse(Arr, 0, 7);
            // Printing reversed array;
            for (int i = 0; i < 8; i++)
            {
                cout << Arr[i] << " ";
            }
            break;
        }
        }
        cout << endl;
    } while (1 <= choice <= 5);
    return 0;
}