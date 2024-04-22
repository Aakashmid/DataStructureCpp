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

class Queue
{
public:
    node *rear;
    node *front;
    Queue()  //constructor
    {
        cout<<"Aakash Kumar Jha | Roll No. 23PCS5102 \n";
        rear = 0;
        front = 0;
    }
    void deq();
    void enq(int x);
    void display();
    bool isEmp();

    ~Queue(){  //destructor
        node *temp=front;
        while (front!=0)
        {
            /* code */
        }
        
    }
};
bool Queue::isEmp()
{
    if (rear == 0 || front == 0)
        return true;
    else
        return false;
}

void Queue::display()
{
    if (isEmp())
        cout << "Queue is empty \n ";
    else
    {
        node *p = front;
        cout << "Queue's value : ";
        while (p != 0)
        {
            cout << p->data << " ";
            p = p->next;
        }
        cout<<endl;
    }
}
void Queue::deq()
{
    if (isEmp())
    {
        cout << "Queue is empty \n ";
    }
    else if (rear == front)
    {
        node *temp = rear;
        rear = front = 0;
        delete temp;  //dequeued 
    }
    else
    {
        node *p = front->next;
        node *temp=front;
        cout<<"Deleted "<<temp->data<<endl;
        delete temp;
        front=p;
    }
}
void Queue::enq(int x)
{
    node *in = new node(x);
    if (front == 0)
    {
        front = rear = in;
        in->next=0;
    }
    else
    {
        rear->next = in;
        rear = in;
    }
}
int main()
{
    cout<<"Name - Aakash Kumar Jha \n";
    Queue q;
    int choice;
    do
    {
        cout<<"Choose operation you want to do \n";
        cout<<"1 for enqueue \n";
        cout<<"2 for dequeue \n";
        cout<<"3 for display queue \n";
        cout<<"Enter your choice : ";cin>>choice;
        switch (choice)
        {
        case 1: // for enqueue
            int val;
            cout<<"Enter value for enqueue : ";
            cin>>val; 
            q.enq(val);
            break;
        case 2: //for dequeue
            q.deq();
            break;
        case 3:
            q.display();
            break;
        }
        cout<<"\n";
    } while(choice>=1 && choice<=3);
    return 0;
}