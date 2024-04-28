#include <iostream>
using namespace std;

////////////////////////////////////////// Incomplete program

int main()
{
    cout << "Name - Aakash Kumar Jha \n";
    int matrix1[3][3] = {{1, 1, 1},
                         {1, 1, 1},
                         {1, 1, 1}};
    int matrix2[3][3] = {{1, 1, 1},
                         {1, 1, 1},
                         {1, 1, 1}};
    // int matrix1[3][3] = {{3, 2, 4},
    //                      {1, 2, 3},
    //                      {5, 3, 1}};
    // int matrix2[3][3] = {{1, 5, 4},
    //                      {7, 3, 8},
    //                      {1, 3, 2}};
    int r1 = 3, c1 = 3;
    int r2 = 3, c2 = 3;
    int choice;
    do
    {
        cout << "Choose operation you want to do \n";
        cout << "1 for addition of both matrices \n";
        cout << "2 for transpose of both  matrix \n";
        cout << "3 for multiplication of both matrices \n";
        cout << "Enter your choice :";
        cin >> choice;
        switch (choice)
        {
        // for adding two matrices
        case 1:
        {
            if (c1 == c2 && r1 == r2)
            {
                int sumMat[r1][c1]; // result matrix
                cout << "Sum of both matrix : \n";
                for (int i = 0; i < r1; i++)
                {
                    for (int j = 0; j < c1; j++)
                    {
                        sumMat[i][j] = matrix1[i][j] + matrix2[i][j];
                        cout << sumMat[i][j] << " ";
                    }
                    cout << "\n";
                }
                cout << "\n";
            }
            else
            {
                cout << "Cannot add both matrices , Number of row and column should be same of both matrices !!\n";
            }
            break;
        }

        // For transpose of matrix
        case 2:
        {
            // Creating transpose matrix
            int Transpose1[c1][r1]; // transpose of first matrix
            int Transpose2[c2][r2]; // transpose of second matrix
            for (int i = 0; i < r1; i++)
            {
                for (int j = 0; j < c1; j++)
                {
                    Transpose1[j][i] = matrix1[i][j];
                    // Transpose2[j][i] = matrix2[i][j];
                }
            }

            // showing transpose matrix of created matrix
            cout << "Transpose of matrix1 is -> \n";
            for (int i = 0; i < c1; i++)
            {
                for (int j = 0; j < r1; j++)
                {
                    cout << Transpose1[i][j] << " ";
                }
                cout << "\n";
            }
            cout << "\n";
            break;
        }

        // for mutliplication of two matrices
        case 3:
        {
            if (c1 != r2)
            {
                cout << "Multiplication of both matrix is not possible !!\n";
            }
            else
            {
                int res[r1][c2]={0}; // resultant matrix
                // multiplying  matrices

                
                // for (int i = 0; i < r1; ++i)
                // {
                //     for (int j = 0; j < c2; ++j)
                //     {
                //         for (int k = 0; k < c2; ++k)
                //         {
                //             res[i][j]=res[i][j]+(matrix1[i][k]*matrix2[k][j]);
                //         }
                //     }
                // }

                cout << "Resultant matrix : -> \n";
                for (int i = 0; i < r1; i++)
                {
                    for (int j = 0; j < c2; j++)
                    {
                        cout << res[i][j] << " ";
                    }
                    cout << "\n";
                }
                cout << "\n";
            }
            break;
        }
        }
        cout << endl;
    } while (1 >= choice <= 3);
    return 0;
}