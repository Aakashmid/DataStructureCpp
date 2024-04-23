#include <iostream>
using namespace std;

////////////////////////////////////////// Incomplete program

int main()
{
    cout << "Name - Aakash Kumar Jha \n";
    int choice;
    do
    {
        cout << "Operation matrix operation you want to do \n";
        cout << "1 for addition of two matrices \n";
        cout << "2 for transpose of a  matrix \n";
        cout << "3 for multiplication of two matrices \n";
        cin >> choice;
        switch (choice)
        {
        //for adding two matrices
        case 1:
        {
            cout << "First Creating matrices \n";
            int r1, r2, c1, c2;
            cout << "Enter number of row and column of matrix first ";
            cin >> r1 >> c1;
            int matrix1[r1][c1];
            cout << "Enter number of row and column of matrix second ";
            cin >> r2 >> c2;
            int matrix2[r2][c2];
            if (c1 == c2 && r1 == r2)
            {
                // Creating first matrix
                for (int i = 0; i < r1; i++)
                {
                    for (int j = 0; j < c1; j++)
                    {
                        cout << "Enter value of " << i + 1 << " row and " << c1 << " column : ";
                        cin >> matrix1[i][j];
                    }
                }
                // Creating second matrix
                for (int i = 0; i < r2; i++)
                {
                    for (int j = 0; j < c2; j++)
                    {
                        cout << "Enter value of " << i + 1 << " row and " << c1 << " column : ";
                        cin >> matrix2[i][j];
                    }
                }

                int sumMat[r1][c1]; // result matrix
                for (int i = 0; i < r1; i++)
                {
                    for (int j = 0; j < c1; j++)
                    {
                        sumMat[i][j] = matrix1[i][j] + matrix2[i][j];
                        cout << sumMat[i][j] << " ";
                    }
                }
            }
            else
            {
                cout << "Cannot add both matrices , Number of row and column should be same of both matrices !!\n";
            }
            break;
        }

        //For transpose of matrix
        case 2:
        {
            // creating matrices
            int r, c;
            cout << "Enter row and column of matrix :";
            cin >> r >> c;
            int Matrix[r][c];
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    cout << "Enter value of row  " << i + 1 << " and  Column " << j + 1<< ": ";
                    cin >> Matrix[i][j];
                }
            }

            // showing created matrix
            cout << "Created matrix \n{";
            for (int i = 0; i < r; i++)
            {
                cout << "{";
                for (int j = 0; j < c; j++)
                {
                    if (j == c - 1)
                        cout << Matrix[i][j] << " ";
                    else
                        cout << Matrix[i][j] << " ,";
                }
                if (i == r - 1)
                    cout << "}";
                else
                {    cout << "},";
                    cout << "\n";
                }
            }
            cout << "} \n";

            // Creating transpose matrix
            int Transpose[c][r];
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    Transpose[j][i] = Matrix[i][j];
                }
            }

            // showing transpose matrix of created matrix
            cout << "Transpose of matrix is \n{";
            for (int i = 0; i < c; i++)
            {
                cout << "{";
                for (int j = 0; j < r; j++)
                {
                    if (j == r - 1)
                        cout << Transpose[i][j] << " ";
                    else
                        cout << Transpose[i][j] << " ,";
                }
                if (i == c - 1)
                    cout << "}";
                else
                {
                    cout << "},";
                    cout << "\n";
                }
            }
            cout << "} \n";
            break;
        }

        //for mutliplication of two matrices
        case 3:{

        }
        default:
            break;
        }
    } while (1 >= choice <= 3);
    return 0;
}