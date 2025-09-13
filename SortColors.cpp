#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &nums);

int main()
{
    vector<int> nums = {2,0,1};

    sortColors(nums);
}



void sortColors(vector<int> &nums)
{

 int n=nums.size();
 int left =0;
 int right=n-1;
 int index=0;

 while(index<=right)
 {
    if(nums[index]==0)
    {
        swap(nums[index],nums[left]);
        index++;
        left++;
    }
      else if(nums[index]==2)
    {
        swap(nums[index],nums[right]);
        //index++;   don't do this its a catch
        right--;
    }
    else{
        index++;
    }
 }

  // printing the array
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}
