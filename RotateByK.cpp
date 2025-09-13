#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &nums, int k);

int main()
{
    vector<int> nums = {-1, -2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(nums, k);

    return 0;
}

void rotate(vector<int> &nums, int k)
{
    // instead of rotating each elemnt copy last k element and stored them inside the new arrya tha shift the elemnt by k times and paste the copies elemnt from new array into the original array.
    //  int n=nums.size();
    //  int last=0;
    //  int temp;

    //  while(last<k)
    //  {
    //     temp=nums[n-1];

    //     for(int i=n-1;i>0;i--)
    //     {
    //         swap(nums[i-1],nums[i]);
    //     }
    //     nums[0]=temp;
    //     last++;
    //  }

    //   // printing the array
    //     for (int i = 0; i < nums.size(); i++)
    //     {
    //         cout << nums[i] << " ";
    //     }

    // by using modulus

     int n = nums.size();
   vector<int> ans(n);


    for (int index = 0; index<n; index++)
    {
        int newindex = (index + k) % n;

        ans[newindex] = nums[index];
    }
    nums = ans;

      // printing the array
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i] << " ";
        }
}
