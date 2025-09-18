#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &nums);

int main()
{
    vector<int> nums = {3, 1, 3, 4, 2};
   cout<< findDuplicate(nums);
}

//positioning method
int findDuplicate(vector<int> &nums)
{
    while(nums[0]!=nums[nums[0]])
    {
        swap(nums[0], nums[nums[0]]);
    }
    
    return nums[0];
}




// Negative marking method / visited method
// int findDuplicate(vector<int> &nums)
// {
//     int ans = -1;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         int index = abs(nums[i]);//getting the element value and than for using that value as an index in furture solution

//         //if already visited than return that index or store it in the ans and break the loop
//         if (nums[index] < 0)//if already visited means negative
//         {
//             ans = index;
//             break;
//         }
//         // visited mark negative
//         nums[index] *= -1;
//     }
//     return ans;
// }

// //by using XOR operator
// int findDuplicate(vector<int> &nums)
// {
//     int r = 0;
//     int sum = 0;
//     int rsum = 0;
//     //sum of an toal array
//     for (int i = 0; i < nums.size(); i++)
//     {
//         sum += nums[i];
//     }
//     //sum of an unique element
//     for (int i = 0; i < nums.size(); i++)
//     {
//         r ^= nums[i];
//     }
//       cout<<"Total unique element sum : "<<r<<endl;
//       cout<<"sum : "<<sum<<endl;

//       cout<<"Duplicate element is : "<<(sum-r)/2;

//     return r;
// }

// there is one more way of bruteforce by sorting and checking next element