#include<iostream>
using namespace std;
int GCD(int n1,int n2){
    if(n1==n2){
        return n1;
    }
    else{
        if (n1>n2){
            return GCD(n1-n2,n2);
        }
        else
        {
            return GCD(n1,n2-n1);
        }
    }
}
int main(){
    cout<<"Name - Aakash Kumar Jha \n";
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Greatest common divisor of both number you entered is : "<<GCD(num1,num2);
    return 0;
}