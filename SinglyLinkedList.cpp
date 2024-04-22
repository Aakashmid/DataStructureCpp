#include <iostream>
using namespace std;
class Node
{
public:
    Node *next; // Storing address of node class object
    int value;
    Node(int d, Node *n = 0)
    {
        value = d;
        next = n;
    }
    // ~Node();
};

class SLL
{
public:
    Node *head;
    SLL()
    {
        head = 0;
    }

    void addToHead(int x);
    void deletefromHead();
    void insert(int x, int index = -1);
    void display();
    void count();
    void addtoend(int x);
    void reverse();
};
void SLL::display()
{
    if (head == 0)
    {
        cout << "Linked List is empty";
    }
    else
    {
        Node *p = head;
        while (p != 0)
        {
            cout << p->value << " ";
            p = p->next;
        }
    }
}

void SLL::addToHead(int x)
{
    // int *p = new Node(x);
    Node *p = new Node(x);
    if (head == 0)
    {
        head = p;
    }
    else
    {
        // if head's addres is not zero then place p to head position and give its next equal to head
        p->next = head;
        head = p;
    }
}

void SLL::addtoend(int x)
{
    if (head == 0)
    {
        addToHead(x);
    }
    else
    {
        Node *AE = new Node(x);
        Node *p = head;
        while (p->next != 0)
        {
            p = p->next;
        }
        p->next = AE;
    }
}
void SLL::insert(int x, int index)
{ // it takes also index and value
    if (index == -1)
    {
        addtoend(x);
    }
    else if (index == 1)
    {
        // if head is zero then insert new element as head
        addToHead(x);
    }
    else
    {
        int count = 1;
        Node *p = head;
        Node *in = new Node(x);
        Node *prev = 0;
        while (p != 0 && count != index) // while p's  address is not zero means loop runs while it reaches to end postion if index not matches
        {
            prev = p;
            p = p->next;
            count++;
        }
        prev->next = in;
        in->next = p;
    }
}

void SLL::deletefromHead(){
    if(head==0){
        cout<<"List is empty !! \n";
    }
    else{
        Node *p=head;
        head=head->next;
        delete p;
        
    }
}
void SLL::count()
{
    if (head == 0)
    {
        cout << "Linked list is empty !!";
    }
    else
    {
        int count = 0;
        Node *temp = head;
        while (temp != 0)
        {
            count++;
            temp=temp->next;  
        }
        cout<<"Total no of elements in array is : "<<count;
    }
}
main()

{
    cout<<"Name - Aakash Kumar Jha \n";
    SLL mysll;
    mysll.addToHead(4);
    mysll.insert(5);
    mysll.insert(7);    // if postion is not given default is end
    mysll.insert(8, 1); // first argument is value and second is position
    mysll.deletefromHead();
    
    mysll.display();
    // mysll.count();
}