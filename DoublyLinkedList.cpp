#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int d, Node *n = 0, Node *p = 0)
    {
        data = d;
        next = n;
        prev = p;
    }
};

class DLL
{
public:
    Node *head;
    Node *tail;
    // construtor
    DLL()
    {
        head = 0;
        tail = 0;
    }
    ~DLL()
    {
        Node *temp = head;
        while (head != 0)
        {
            head = head->next; // traverse list until reaches to end and delete element one by one
            delete temp;
            temp = head;
        }
        tail = 0; // when tail deleted assign tail=0;
    }

    void addtohead(int x);
    void addtotail(int x);
    void insert(int index, int x);
    void del(int x); // delete method
    void deletefromhead();
    void deletefromtail();
    void display();
    void reverse();
};

void DLL::addtohead(int x)
{
    Node *add = new Node(x);
    if (head == 0)
    {
        head = tail = add;
    }
    else
    {
        head->prev = add;
        add->next = head;
        head = add;
    }
}

void DLL::addtotail(int x)
{
    Node *p = new Node(x);
    if (head == 0)
    {
        head = tail = p;
    }
    else
    {
        p->prev = tail;
        tail->next = p;
        tail = p;
    }
}

void DLL::deletefromhead()
{
    if (head == 0)
    {
        cout << "DLL is empty";
    }
    else
    {
        Node *p = head;
        head = head->next;
        if (head == 0)
        {
            tail = 0;
        }
        else
        {
            head->prev = 0;
        }
        delete p;
    }
}
void DLL::deletefromtail()
{
    if (head == 0)
    {
        cout << "DLL is empty";
    }
    else
    {
        Node *temp = tail;
        tail = tail->prev;
        if (tail == 0)
        {
            head = 0;
        }
        else
        {
            tail->next = 0;
        }
        delete temp;
    }
}

// Insert node
void DLL::insert(int index, int x)
{
    if (head == 0 || index == 1)
    {
        addtohead(x);
    }
    else
    {
        int count = 1;
        Node *p = head;
        Node *in = new Node(x);
        Node *pre = 0;
        while (p != 0 && count != index)
        {
            pre = p;
            p = p->next;
            count++;
        }
        if(p==0){
            addtotail(x);
        }
        else{
        pre->next = in;
        in->prev=pre;
        in->next = p;
        }
        // cout<<"In else ";
    }
}

void DLL::display()
{
    if (head == 0)
    {
        cout << "Head is empty";
    }
    else
    {
        Node *p = head;
        while (p != 0)
        {
            cout<<p->data<< " ";
            p=p->next;
        }
        cout<<"\n";
    }
    
}
void DLL::reverse(){
   if (head==0)                                                                                                                                                                                                                                                                                                                                                                                                                                                         {
    cout<<"Dll is empty can't reverse";
   }
   else{
    Node *p=head->next;
    head->next=0;
    tail=head;
    while (p!=0)
    {
        Node *temp=p;
        addtohead(p->data);
        p=p->next;
        delete temp;
    }
   }
}

void DLL::del(int x){
    if (head==0)
    {
        cout<<"list is empty !! \n";
    }
    else{
        Node *p=head;
        Node *pre=0;
        while (p!=0 && p->data!=x)
        {
            pre=p;
            p=p->next;
        }
        if (p==head){
            deletefromhead();
        }
        else if(p==tail){
            deletefromtail();
        }
        else if (p==0){
            cout<<"Element is not found !! \n";
        }
        else{
            pre->next=p->next;
            p->next->prev=pre;
            delete p;
        }
    }
    
}
int main()
{
    DLL d;
    // d.addtohead(5);
    // d.insert(2,2);
    d.insert(3,3);
    d.insert(4,8);
    // d.display();
    // d.reverse();
    d.del(8);
    d.display();
    // Write menu driven program for this code
    return 0;
}