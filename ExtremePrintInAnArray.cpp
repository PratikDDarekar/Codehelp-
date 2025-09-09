#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int size = 11;

    int i = 0, j = size - 1;

    while (i <= j)
    {
        if (i == j)
        {
            cout << arr[j] << "";
            //  break;
        }
        else
        {
            cout << arr[i] << " ";
            cout << arr[j] << " ";
        }
        i++;
        j--;
    }
}