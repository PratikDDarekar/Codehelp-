#include <iostream>
#include <vector>
#include <set> //header for set
using namespace std;

int BinarySearch(vector<int> arr, int target);

int main()
{
    vector<int> arr = {3, 2, 3, 3, 3, 3, 7, 8, 9};
    int target = 3;

    cout << BinarySearch(arr, target) << ": Found ";
}
//1st occurance
int BinarySearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size()-1;
    int mid = (start + end) / 2;
    int index=-1;
    while (start <= end)
    {
        if (target == arr[mid])
        {
            index=mid;//store it
            end = mid - 1;//go to left
          
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

    return index;
}