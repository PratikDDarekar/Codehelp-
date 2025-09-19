#include <iostream>
#include <vector>
#include <set> //header for set
using namespace std;
 double bruteForce( vector<int>&nums, int k);
 double slidingWindow( vector<int>&nums, int k);
int main()
{
    vector<int>nums={1,12,-5,-6,50,3};
    int k=4;

  cout<<bruteForce(nums, k)<<endl;
    cout<<slidingWindow(nums, k);
}

double slidingWindow( vector<int>&nums, int k)
{
 int i=0;
 int j=k-1;
 int sum=0;

 for(int y=i;y<=j;y++)
 {
    sum += nums[y];
 }
 int maxSum=sum;

 //Sliding Window Method
 j++;//if the size of the array is same as k value than the next condition will not execute
 while(j<nums.size())
 {
   sum -= nums[i++];//1st subtract than ++
   sum += nums[j++];//we have already ++ j before this loop therefore first add than ++
   maxSum=max(maxSum,sum);
 }
 double maxAvg =maxSum/(double)k;//explicit typacasting 
return maxAvg;
}







double bruteForce( vector<int>&nums, int k)
{
    int maxsum =INT32_MIN;
int i=0;
int j=k-1;


while(j<nums.size())
{
    int sum=0;
    for(int y=i;y<=j;y++)
    {
        sum +=nums[y];
    }
   maxsum=max(maxsum,sum);
 
    i++;j++;
}

double maxAvg =maxsum/(double)k;//explicit typacasting 
return maxAvg;
}