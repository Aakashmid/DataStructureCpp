#include<iostream>
using namespace std;

int Pow(int base,int exp){
    if (exp==0)
    {
        return 1;
    }
    else{
        return base*Pow(base,exp-1);
    }
}
main(){
    cout<<"Name - Aakash Kumar Jha \n";
    int n,e;  //n is base and e is its exponential
    cout<<"Enter base value :  ";
    cin>>n;
    cout<<"Enter exponential value :  ";
    cin>>e;
    cout<<n<<"^"<<e<<" = "<<Pow(n,e);
}
