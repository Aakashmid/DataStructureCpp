#include<iostream>
using namespace std;

class Queue
{
private:
    int s, *Arr;
    int  front, rear;

public:
    Queue(int size)
    {
        Arr = new int[size];
        s = size;
        front = rear = -1;
    }
    bool isFull();
    bool isEmp();
    void enq(int x);
    void deq();
    void display();
    ~Queue(){
        delete []Arr;
    }
};
bool Queue::isFull()
{
    if (rear==s-1)
    {
        return true;
    }
    return false;
}
bool Queue::isEmp()
{
    if (rear==-1 && front==-1)  //checking rear value
    {
        return true;
    }
    return false;
}
void Queue::enq(int x){
    if (isFull())
    {
        cout<<"OverFlow \n";
    }
    else if (isEmp())
    {
        front++;
        Arr[++rear]=x;
    }
    else
    {
        Arr[++rear]=x;
    }
}
void Queue::deq(){
    if(isEmp()){
        cout<<"UnderFlow \n";
    }
    else {
        if(rear==front){
        cout<<"Deleted "<<Arr[front]<<endl;
        front=rear=-1;
        }
        else{
        cout<<"Deleted "<<Arr[front]<<endl;
        front++;
        }
    }
}
void Queue::display(){
    if(isEmp()){
        cout<<"Queue is Empty  \n";
    }
    else{
        cout<<"Queue's elements are : ";
        for(int i=front; i<=rear;i++){
            cout<<Arr[i]<<" ";
        }
        cout<<endl;
    }   
}
int main()
{
    cout<<"Name - Aakash Kumar Jha \n";
    Queue q(7);
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