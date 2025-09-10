#include <iostream>
using namespace std;

void Max(int arr[][3], int col, int row);
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int col = 3;
    int row = 3;
    Max(arr, col, row);
}

void Max(int arr[][3], int col, int row)
{
    int max = INT32_MIN;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }

    cout << "maximum : " << max;
}