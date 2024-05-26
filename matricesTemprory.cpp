// Matrices adding function
void Add(int r, int c, int *mat ,int *mat2)
{
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

// function for transpose a matrix
void Transpose(int r, int c, int *mat)
{
    int TMat[r][c]; // 'TMat' is transpose matrix of matrix 'mat'
    cout << "Transpose of matrix is : \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            TMat[j][i] = mat[i][j];
            cout << TMat[j][i] << " ";
        }
        cout << "\n";
    }
}

// function for multipy two matrices
void Multiply(int r1, int c1, int *mat,int *mat2)
{
    if (c1 == r1)
    {
    }
    else
    {
        cout << "Cannot multiply both matrices !! \n";
    }
}