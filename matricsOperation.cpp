#include <iostream>
using namespace std;
int main()
{
    char ans;
    do
    {
        cout << "Choose operations you want to do  :>" << endl;
        cout << "1 for create a matrix , 2 for adding two matrices \n3 for multiplying two matrices \n";
        int choice;
        cout << "Choose your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {

            int row, col;
            cout << "Enter value for no. of  row :";
            cin >> row;
            cout << "Enter value for no. of   column";
            cin >> col;
            int mat[row][col];
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    cout << "Enter value : ";
                    cin >> mat[i][j];
                }
            }

            // showing matrix
            cout << "Created Matrix is -> \n";
            cout << "{";
            for (int i = 0; i < row; i++)
            {

                cout << "{";
                for (int j = 0; j < col; j++)
                {
                    cout << mat[i][j];
                    if (j < col - 1)
                    {
                        cout << ",";
                    }
                }
                cout << "}";
                if (i < row - 1)
                {
                    cout << ",";
                }
                cout << endl;
            }
            cout << "} \n";

            break;
        }
        case 2:
        {
            int r1, r2, c2, c1;
            cout << "Enter value of row of first matrix:";
            cin >> r1;
            cout << "Enter value of column of first matrix:";
            cin >> c1;
            cout << "Enter value of row of second matrix:";
            cin >> r2;
            cout << "Enter value of column of second matrix:";
            cin >> c2;
            // Create first matrix
            int mat1[r1][c1];
            for (int i = 0; i < r1; i++)
            {
                for (int j = 0; j < c1; j++)
                {
                    cout << "Enter value : ";
                    cin >> mat1[i][j];
                }
            }

            // Create second matrix
            int mat2[r2][c2];
            for (int i = 0; i < r2; i++)
            {
                for (int j = 0; j < c2; j++)
                {
                    cout << "Enter value : ";
                    cin >> mat2[i][j];
                }
            }

            // Checking both matrices can add or not
            if (c1 == c2 && r1 == r2)
            {
                int sumMat[r2][c2]; // result matrix
                for (int i = 0; i < r2; i++)
                {
                    for (int j = 0; j < c2; j++)
                    {
                        sumMat[i][j] = mat1[i][j] + mat2[i][j];
                        cout << sumMat[i][j] << " ";
                    }
                }
            }
            else{
                cout<<"Cannot add both matrices !! \n";
            }
        }

        default:
            break;
        }
        cout << "Want to run operations again (y for yes , n for no) : ";
        cin >> ans;
    } while (ans == 'y');

    return 0;
}