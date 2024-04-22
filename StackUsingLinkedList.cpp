#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d, node *n = 0)
    {
        data = d;
        next = n;
    }
};
class Stack
{
public:
    node *top;
    node *head;
    Stack() //constructor
    {
        top = 0;
        head = 0;
    }
    // destructor
    ~Stack(){
        node *p=head;
        while(p!=0){
            head=head->next;
            delete p;
            p=head;
        }
    }
    void pop();
    void peek();
    void push(int x);
    void display();
    bool isEmp();
};

bool Stack::isEmp()
{
    if (top == 0 || head == 0)
        return true;
    else
        return false;
}

void Stack::display()
{
    if (isEmp())
        cout << "Stack is empty \n ";
    else
    {
        node *p = head;
        cout << "Stack's value : ";
        while (p != 0)
        {
            cout << p->data << " ";
            p = p->next;
        }
    }
}
void Stack::pop()
{
    if (isEmp())
    {
        cout << "Stack is empty \n ";
    }
    else if (top == head)
    {
        node *temp = top;
        top = head = 0;
        delete temp;
        cout << "Popped \n";
    }
    else
    {
        node *p = head;
        while (p->next != top)
        {
            p = p->next;
        }
        node *temp = top;
        p->next = 0;
        top = p;
        delete temp;
    }
}
void Stack::peek()
{
    if (isEmp())
    {
        cout << "Stack is empty \n";
    }
    else
    {
        cout << "Peek value is :" << top->data << endl;
    }
}
void Stack::push(int x)
{
    node *in = new node(x);
    if (head == 0)
    {
        head = top = in;
        // in->next=0;
    }
    else
    {
        top->next = in;
        top = in;
    }
}
int main()
{
    cout<<"Name - Aakash Kumar Jha \n";
    Stack s1;
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
            s1.peek();
            break;
        case 4:
            s1.display();
            break;
        }
        cout << "\n";
    } while (choice >= 1 && choice <= 4);
    return 0;
}