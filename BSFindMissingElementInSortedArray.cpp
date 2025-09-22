#include <iostream>
#include <vector>
#include <set> //header for set
using namespace std;
// Approches:- 1.linearSearch

int MissingElementInSortedArrayUsingBS(vector<int> arr);

int main()
{
   vector<int> arr = {1,2, 3, 4, 5, 6, 7, 8};
   cout << MissingElementInSortedArrayUsingBS(arr);
}

int MissingElementInSortedArrayUsingBS(vector<int> arr)
{
   int n = arr.size();
   int s = 0;
   int e = n-1 ;//to handle the last case we can run it uptill n instead od n-1;
   int mid = (s + e) / 2;
   int ans = -1;
   while (s <= e)
   {
      int diff= arr[mid] - mid;
      //find the 1st occurance of the number whose differece is not equals to the 1
      if (diff == 1)//as we know the difference is of 1 or should be of 1
      {
         s = mid + 1; // go right
      }
      else
      {
         ans = mid;//store ans
         e = mid - 1;//go left uptill you find its 1st occurace of the elements whose difference is not equals to 1
      }

      mid = (s + e) / 2;//update
   }

   if(ans==0)    //to handle the last case we can initiat end with n instead od n-1; than no need of this cpndition
   {
      return n+1;
   }
   return ans + 1;
}