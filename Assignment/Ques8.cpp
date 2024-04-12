#include<iostream>
using namespace std;
main(){
    int r,c;
    cout<<"Enter value of no. of rows : ";
    cin>>r;
    cout<<"Enter value of no. of columns : ";
    cin>>c;
    if(r==c){
        int Matrix[r][c];
        for (int i=0;i<r;i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout<<"Enter value : ";
                cin>>Matrix[i][j];
            }
            
        }

// Converting matrix to lower triangle matrix
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i<j)
                {
                    Matrix[i][j]=0;
                }
            }
 
        }
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {     
            cout<<Matrix[i][j]<<" ";
            }
            cout<<"\n"           ;
        }
    }
    else{
        cout<<"No. of rows and columns should be same !!";
    }
}