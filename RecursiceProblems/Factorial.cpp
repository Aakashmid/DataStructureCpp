#include<iostream>
using namespace std;
int Factorial(int num){
    if(num==1 || num==0)
        return 1;
    else
        return num*Factorial(num-1);
}
int main()
{
    cout<<"Name - Aakash Kumar Jha \n";
    int n;
    cout<<"Enter number whose factorial you want : ";
    cin>>n;
    cout<<"Factorial  of "<<n<<" is = "<<Factorial(n);
    return 0;
}