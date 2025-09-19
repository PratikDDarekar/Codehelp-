#include <iostream>
#include <vector>
#include <set> //header for set
using namespace std;

int removeDuplicates(  vector<int>&nums);

int main()
{
    vector<int>nums={0,0,1,1,1,2,2,2,3};

   cout<< removeDuplicates(nums);
}

int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=1;

        while(j<nums.size())
        {
            if(nums[i]==nums[j])
            {
                j++;
            }
            else
             { 
                nums[++i]=nums[j++];
            //     i++;
            //     nums[i]=nums[j];
            //     j++;
            }
        }
        return i+1;
    }