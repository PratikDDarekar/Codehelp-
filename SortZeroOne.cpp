#include <iostream>
using namespace std;

void sortZeroOne(int arr[], int size);
void sort(int arr[], int size, int zcount, int ocount);
int main()
{
    int arr[] = {1, 0, 1, 0, 1, 1, 1, 0, 0, 0, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortZeroOne(arr, size);
}

void sortZeroOne(int arr[], int size)
{
    int zcount = 0, ocount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zcount++;
        }
        else
        {
            ocount++;
        }
    }
    sort(arr, size, zcount, ocount);
    //  cout<<zcount<<","<<ocount;
}

void sort(int arr[], int size, int zcount, int ocount)
{
    int i = 0;
    while (i < zcount)
    {
        arr[i] = 0;
        i++;
    }
    while (i < size)
    {
        arr[i] = 1;
        i++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}