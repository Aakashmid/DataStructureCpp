#include <iostream>
using namespace std;

int  fibonacci(int n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2); 
}

main(){
    int n;
    cout<<"Enter no. of terms you want to print of fibonacci series : ";
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        cout<<fibonacci(i)<<" ";
    }
}