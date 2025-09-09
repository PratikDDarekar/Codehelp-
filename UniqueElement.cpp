#include <iostream>
using namespace std;

void findUnique(int arr[], int size);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    findUnique(arr, size);
}

void findUnique(int arr[], int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    cout << "answer is : " << ans << endl;
}