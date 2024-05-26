#include<iostream>
using namespace std;

// Circular queue using array 
class CQ{
	public:
	int front=-1,rear=-1;
	int size;
	int *arr;
	CQ(int s=0){
		size=s;
		arr=new int[size];
	}
	bool isfull();
	bool isemp();
	void enq(int x);
	void deq();
	void display();
};

bool CQ::isemp(){
	if(front==-1)
		return true;
	return false;
}
bool CQ::isfull(){
	if(front>0 && rear==front-1){
		return true; 
	}
	else if(front==0 && rear==size-1)
		return true;
	else
		return false;
}
void CQ::display(){
	if(isemp())
		cout<<"Queue is empty !! \n";
	else{
		if(front>0 && rear<front){  // when rear is behind the front
			for (int i =front; i < size; i++)
			{
				cout<<arr[i]<<" ";
			}
			for (int i = 0; i <=rear; i++)
			{
				cout<<arr[i]<<" ";
			}
		}
		else{
			for (int i =front; i <=rear; i++)
			{
				cout<<arr[i]<<" ";
			}
		}
		cout<<endl;
	}
}

void CQ::enq(int x){
	if(isemp()){
		front=rear=0;
		arr[front]=x;
		cout<<"Successufly enqueued !! \n";
	}
	else if(isfull()){
		cout<<"Queue is full !! \n";
	}
	else{
		if(front>0 && rear==size-1){
			rear=0;
			arr[rear]=x;
		}
		else{
			arr[++rear]=x;
		}
		cout<<"Successufly enqueued !! \n";
	}
}

void CQ::deq(){
	if(isemp()){
		cout<<"Queue is empty !! \n";
	}
	else
	{
		if (front==rear)
		{
			rear=front=-1;
		}
		else if (front==size-1)
		{
			front=0;
		}
		
		else{
			front++;
		}
		cout<<"Successufly dequeued !! \n";
	}
}
int main(){
	int size;
	cout<<"Name - Aakash Kumar Jha \n";
	cout<<"Create circular queue  Enter its size : ";
	cin>>size; 
	CQ q(size);
	int choice;
	do
	{
		cout<<"Choose operation you want to do !! \n";
		cout<<"1 for enqueue \n";
		cout<<"2 for dequeue \n";
		cout<<"3 for display queue \n";
		cout<<"Other number for exit \n";
		cin>>choice;
		switch (choice)
		{
		case 1:
			int num; cout<<"Enter number you want to enqueue :";
			cin>>num;
			q.enq(num);
			break;
		case 2:
			q.deq();
			break;
		case 3:
			q.display();
			break;
		}
	} while(0<choice<=3);
	
	return 0;
}
     