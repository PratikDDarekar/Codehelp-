#include <iostream>
#include <vector>
#include <algorithm>  // add this at the top
#include <set> //header for set
using namespace std;

 string calc_Sum(vector<int>& arr1, vector<int>& arr2);
int main()
{
    vector<int>arr1 = {1,5,3,78,7};
    vector<int>arr2 = {8,5,13,8};
      calc_Sum(arr1, arr2);

      
}

    string calc_Sum(vector<int>& arr1, vector<int>& arr2) {
        // Complete the function
        string ans;
        
        int i=arr1.size()-1;//we are going to add from backward
        int j=arr2.size()-1;
        int carry=0;
        
        while(i>=0 &&j>=0)//if both of the arrays are having the same size
        {
            int x= arr1[i]+arr2[j]+carry;
            int digit = x%10;
            ans.push_back(digit + '0');
            carry=x/10;
            i--;j--;
        }
        while(i>=0)//if arr1[] has a large size than arr2[] than at the end assume zero
        {
            int x= arr1[i]+0+carry;
            int digit = x%10;
            ans.push_back(digit + '0');
            carry=x/10;
             i--;
        }
        while(j>=0)//if arr2[] has a large size than arr1[] than at the end assume zero
        {
            int x= 0+arr2[j]+carry;
            int digit = x%10;
            ans.push_back(digit + '0');
            carry=x/10;
             j--;
        }
        
        if(carry)//if at the end carry is remaining than add it at the last
        {
           ans.push_back(carry+'0');
        }
        while(ans[ans.size()-1]==0)//if at the end of the answer there is 0 than remove it before reversing ans[]
        {
            ans.pop_back();
        }
        
        reverse(ans.begin(),ans.end());//reverse the answer array
        return ans;
    }