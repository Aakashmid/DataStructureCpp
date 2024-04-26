#include<iostream>
using namespace std;
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
	if(front>0 && rear==size-1){
		if(rear==front-1){
			return true;
		}
		else{
			return false;
		}
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
		if(front==0 && rear==size-1){
			for(int i=front;i<=rear;i++){
				cout<<arr[i]<<" ";
			}
		}
		else if(front>0 && rear==size-1){
			for(int i=0; i<size;i++){
				cout<<arr[i]<<" ";
			}
			for(int i=0;i<=rear;i++){
				cout<<arr[i]<<" ";
			}
		}
		else{
			for(int i=0;i<=rear;i++){
				cout<<arr[i]<<" ";
			}
		}
	}
}

void CQ::enq(int x){
	if(isemp()){
		front=rear=0;
		arr[front]=x;
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
	}
}

void CQ::deq(){
	if(isemp()){
		cout<<"Queue is empty !! \n";
	}
}
int main(){
	cout<<"Name - Aakash Kumar Jha \n";
	CQ q1(4);
	q1.enq(4);
	q1.enq(1);
	q1.enq(5);
	// q1.enq(7);
	// q1.enq(9);
	q1.display();
	return 0;
}
