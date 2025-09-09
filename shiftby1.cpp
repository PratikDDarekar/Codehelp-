#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(0);

    int temp = arr[size - 1];

    for (int i = size - 1; i > 0; i--)
    {
        swap(arr[i], arr[i - 1]);
    }

    arr[0] = temp;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}