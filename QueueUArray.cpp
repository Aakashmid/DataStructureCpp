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
    if (rear==-1)
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
    else{
        front++;
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
    }   
}
int main()
{
    Queue q(5);
    // q.enq(4);
    // q.enq(3);
    // q.enq(6);
    // q.deq();
    // q.display();
    return 0;
}