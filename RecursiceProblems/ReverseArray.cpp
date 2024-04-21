#include<iostream>
using namespace std;
void reverse(int A[],int l,int h){
    if (l<h)
    {
        int temp=A[l];
        A[l]=A[h];
        A[h]=temp;
        reverse(A,l+1,h-1);
    }
}
int main(){
    cout<<"Name - Aakash Kumar Jha \n";
    int Arr[8]={2,4,6,1,8,4,6,7};
    reverse(Arr,0,7);
    // Printing reversed array;
    for (int  i = 0; i < 8; i++)
    {
        cout<<Arr[i]<<" ";
    }
    return 0;
}