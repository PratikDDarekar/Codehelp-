#include <iostream>
using namespace std;

bool findTarget(int arr[][3], int row, int col, int target);
int main()
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int col = 3;
    int row = 2;
    int target = 15;

    if (findTarget(arr, row, col, target))
    {
        cout << "Target Found";
    }
    else
    {
        cout << "Target Not Found";
    }
    return 0;
}

bool findTarget(int arr[][3], int row, int col, int target)
{
    bool flag = false;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                flag = true;
            }
        }
    }
    return flag;
}