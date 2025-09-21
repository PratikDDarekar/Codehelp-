#include <iostream>
#include <vector>
#include <set> //header for set
using namespace std;

int BinarySearch(vector<int> arr, int target);

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 9;

    cout << BinarySearch(arr, target) << ": Found ";
}

int BinarySearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size();
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (target == arr[mid])
        {
            return mid;//return index
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }

        mid = (start + end) / 2; // update don't forget
    }

    return -1;
}