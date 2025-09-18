#include <iostream>
#include <vector>
#include <algorithm> //don't forget to include
using namespace std;

int pivotIndex(vector<int> &nums);

int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    cout << pivotIndex(nums);
}

int pivotIndex(vector<int> &nums) // PreFixSum Aprroach
{

    vector<int> lsum(nums.size(), 0);
    vector<int> rsum(nums.size(), 0);

    // calculating left sum
    for (int i = 1; i < nums.size(); i++)
    {
        lsum[i] = lsum[i - 1] + nums[i - 1];
        cout<<"lsum : "<<lsum[i]<<", ";
    }cout<<endl;
    // calculating right sum
    for (int j = nums.size() - 2; j >= 0; j--)
    {
        rsum[j] = rsum[j + 1] + nums[j + 1];
           cout<<"rsum : "<<rsum[j]<<", ";
    }cout<<endl;
    // checking both are same or not
    for (int i = 0; i < nums.size(); i++)
    {
        if (lsum[i] == rsum[i])
        {
             cout<<"lsum : "<<lsum[i]<<" rsum : "<<rsum[i]<<endl;
            return i;
        }
    }

    return -1;
}

// int pivotIndex(vector<int> &nums)   //BruteForce Approach
// {

//     for (int i = 0; i < nums.size() ; i++)
//     {
//         int lsum = 0;
//         int rsum = 0;

//         for (int j = 0; j < i; j++)
//         {
//             lsum += nums[j];
//         }
//         for (int k = i + 1; k <  nums.size(); k++)
//         {
//             rsum += nums[k];
//         }
//          cout << "lsum : " << lsum << " rsum : " << rsum << endl;
//         if (lsum == rsum)
//         {
//             cout << "lsum : " << lsum << " rsum : " << rsum << endl;
//             return i;
//         }

//     }
//     return -1;
// }
