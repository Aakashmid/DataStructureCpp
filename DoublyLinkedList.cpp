#include<iostream>
using namespace std;

class node{
    public:
    int data;node *next;node *prev;
    node(int d, node *n=0,node*p=0){
        data=d; next=n; prev=p;
    }
};

// Doubly linked list class
class DLL{
    public:
    node *head;node *tail;
    DLL(){
        head=0;tail=0;
    }

    ~DLL(){
        node *temp=head;
        while (head!=0)
        {
            head=head->next; delete temp; temp=head;
        }
        tail=0;
    }
    void addtohead(int x);
    void addtotail(int x);
    void insert(int x,int index);
    void Delete(int x);
    void deletefromhead();
    void deletefromtail();
    void display();
    void reverse();
};

void DLL::addtohead(int x){
    node *p=new node(x);
    if(head==0)  { head=tail=p; }
    else{ 
        p->next=head;
        head->prev=p;
        head=p;
    }
}
void DLL::addtotail(int x){
    node *p=new node(x);
    if(head==0)  { head=tail=p; }
    else{ 
        p->prev=tail;
        tail->next=p;
        tail=p;
    }
}

void DLL::deletefromhead(){
    if(head==0){cout<<"Linked list is empty \n";}
    else{
        node *p=head;
        head=head->next;
        if(head==0){ tail=0;}
        else
            head->prev=0;
        delete p;
    }
}

void DLL::deletefromtail(){
    if(head==0){cout<<"Linked list is empty \n";}
    else{
        node *p=tail;
        tail=tail->prev;
        if(tail==0){ head=0;}
        else
            tail->next=0;
        delete p;
    }
}

void DLL::insert(int x,int index){
    if(index==1){ addtohead(x); }
    else{
        node *in=new node(x);
        node *p=head;int count=1;node *previous=0;
        while (p!=0 && count !=index)
        {
            previous=p;
            p=p->next;
            count++;
        }
        previous->next=in;
        in->prev=previous;
        in->next=p;
        p->prev=in;
    }
}

void DLL::Delete(int x){
    node *p=head;
    while (p!=0 && p->data!=x)
    {
        p=p->next;
    }
    if(p==head){deletefromhead();}
    else if(p==0){ cout<<"Element is not fount !! \n";}
    else if(p==tail){deletefromtail();}
    else{
        p->prev->next=p->next;
        p->next->prev=p->prev;
        delete p;
    }
}

void DLL::display(){
    node *p=head;
    if(head==0){cout<<"Linked list is empty !! \n"; }
    else{
        while (p!=0)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
    }
}
void DLL::reverse(){
    node *p=head->next;
    head->next=0;
    tail=head;
    while(p!=0){
        node *temp=p;
        addtohead(p->data);
        p=p->next;
        delete temp;
    }
}


int main(){
    cout<<"Name - Aakash Kumar Jha \n";
    DLL d;
    d.addtohead(5);
    d.addtotail(7);
    // d.deletefromhead();
    // d.deletefromtail();
    d.insert(6,2);  //insert 6 at 2nd place 
    d.Delete(5);
    d.reverse();
    d.display();
}