#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
        else if (arr[i] == 1 && arr[j] == 0) // or instead without any condition we can simply used else here
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}