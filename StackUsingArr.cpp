#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int s,top;

public:
    Stack(int size)
    {
        s = size;
        arr = new int[size];
        top=-1;
    }
    int pop();
    int peek();
    void push(int data);
    bool isFull();//check stack is full
    bool isEmp(); //check stack is empty
    void display();
};

void Stack::display(){
    if (isEmp())
    {
        cout<<"Stack is empty \n";
    }
    else{
        cout<<"Stack elements are : ";
        for (int i = 0; i <=top; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    
}

bool Stack::isEmp(){
    if(top==-1)
    return true;
    else
    return false;
}
bool Stack::isFull(){
    if(top==s-1)
    return true;
    else
    return false;
}


void Stack::push(int data){
    if(isFull()){
        cout<<"Stack is full \n ";
    }
    else{
        arr[++top]=data;
    }
}
int Stack::pop(){
    if (isEmp()){
        cout<<"Stack is empty \n";
    }
    else
    return arr[top--];
}

int Stack::peek(){
    if (isEmp()){
        cout<<"Stack is empty \n";
    }
    else
    return arr[top];
}
int main(){
    Stack s1(5);
    s1.push(4);
    s1.push(5);
    s1.push(8);
    cout<<"Popped "<<s1.pop()<<endl;
    cout<<"Popped "<<s1.pop()<<endl;
    s1.display();
    return 0;
}