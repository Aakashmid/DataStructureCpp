#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int s, top;

public:
    Stack(int size)
    {
        s = size;
        arr = new int[size];
        top = -1;
    }
    int pop();
    int peek();
    void push(int data);
    bool isFull(); // check stack is full
    bool isEmp();  // check stack is empty
    void display();
};

void Stack::display()
{
    if (isEmp())
    {
        cout << "Stack is empty \n";
    }
    else
    {
        cout << "Stack elements are : ";
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout<<endl;
    }
}

bool Stack::isEmp()
{
    if (top == -1)
        return true;
    else
        return false;
}
bool Stack::isFull()
{
    if (top == s - 1)
        return true;
    else
        return false;
}

void Stack::push(int data)
{
    if (isFull())
    {
        cout << "OverFlow \n ";
    }
    else
    {
        arr[++top] = data;
    }
}
int Stack::pop()
{
    if (isEmp())
    {
        cout << "UnderFlow \n";
    }
    else
        return arr[top--];
}

int Stack::peek()
{
    if (isEmp())
    {
        cout << "Stack is empty \n";
    }
    else
        return arr[top];
}
int main()
{
    cout<<"Name - Aakash Kumar Jha \n";
    Stack s1(5);
    int choice;
    do
    {
        cout << "Choose operation you want to do \n";
        cout << "1 for push in stack \n";
        cout << "2 for pop from stack \n";
        cout << "3 for peek  of stack \n";
        cout << "4 for display stack's element \n";
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1: // for push  in stack
            int val;
            cout << "Enter value for push in stack : ";
            cin >> val;
            s1.push(val);
            break;
        case 2: // for pop from  stack
            s1.pop();
            break;
        case 3:
            cout<<"Peek value of stack is :  "<<s1.peek()<<endl;
            break;
        case 4:
            s1.display();
            break;
        }
        cout << "\n";
    } while (choice >= 1 && choice <= 4);
    return 0;
}