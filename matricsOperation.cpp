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
        switch (choice)
        {
        case 1:
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

                int sumMat[r][c]; // result matrix
                for (int i = 0; i < r; i++)
                {
                    for (int j = 0; j < c; j++)
                    {
                        sumMat[i][j] = mat1[i][j] + mat2[i][j];
                        cout << sumMat[i][j] << " ";
                    }
                }
            }
            else
            {
                cout << "Cannot add both matrices , Number of row and column should be same of both matrices !!\n";
            }
            break;

        default:
            break;
        }
    } while (1 >= choice <= 3);
    return 0;
}