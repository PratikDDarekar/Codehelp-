#include <iostream>
#include <vector>
#include <algorithm> //don't forget to include
using namespace std;

bool hashArrayTwoCandidate(int arr[], int n, int x);
int main()
{
    int arr[] = {6, 14, 45, 16, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 16;

    cout << hashArrayTwoCandidate(arr, n, x);
}

// bool hashArrayTwoCandidate(int arr[], int n, int x)
// {
// for(int i=0;i<n;i++)
// {
//     for(int j=1+i;j<n;j++)
//     {
//         if(arr[i]+arr[j]== x)
//         {

//          //   cout<<arr[i]<<"+"<<arr[j]<<"="<<x;
//             return true;
//         }
//     }
// }
//    return false;
// }

bool hashArrayTwoCandidate(int arr[], int n, int x)
{
    int left = 0;
    int right = n - 1;
    int sum = 0;
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        sum = arr[left] + arr[right];

        if (sum == x)
        {
            cout << sum << endl;
            return true;
        }
        else if (sum > x)
        {
            right--;
        }
        else if (sum < x)
        {
            left++;
        }
    }
    return false;
}