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
    Stack()
    {
        top = 0;
        head = 0;
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
        node *p=head;
        while (p->next !=top)
        {
            p=p->next;
        }
        node *temp=top;
        p->next=0;
        top=p;
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
    Stack s1;
    s1.push(4);
    // s1.push(6);
    // s1.push(8);
    // s1.pop();
    // s1.peek();
    // s1.display();
    return 0;
}