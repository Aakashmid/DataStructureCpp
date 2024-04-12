// Create a recursive funtion to calculate sum of element of given array
#include<iostream>
using namespace std;

int SumArr(int a[],int n){
    if (n==1)
    {
        return a[0];
    }
    else{
        return a[n-1]+SumArr(a,n-1);
    }
}
int main(){
    int myarr[]={1,2,3,4,1,2,3,2,2,5,10,5};
    int size=sizeof(myarr)/sizeof(myarr[0]);
    cout<<SumArr(myarr,size);

    return 0;
}