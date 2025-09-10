#include <iostream>
using namespace std;

void printArray(int arr[][3], int row, int col);

int main()
{

    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int col = 3;
    int row = 2;
    printArray(arr, row, col);
    return 0;
}

void printArray(int arr[][3], int row, int col)
{

    // row-wise access
    cout << "row-wise access" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    // column-wise access
    cout << "col-wise access" << endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[j][i] << " ";
        }
    }
}
