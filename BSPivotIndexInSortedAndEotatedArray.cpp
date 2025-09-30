#include <iostream>
#include <vector>
#include <set> //header for set
using namespace std;


 int BSPivotIndexInSortedAndRotatedArray( vector<int>arr,int n);

int main()
{
    vector<int>arr={12,14,16,2,4,6,8,10};
    int n= arr.size();
   cout<<BSPivotIndexInSortedAndRotatedArray(arr, n);
}

 int BSPivotIndexInSortedAndRotatedArray( vector<int>arr,int n)
 {
    int s=0;
    int e= n-1;
   
    int ans=-1;

    while(s<e)
    { int mid= (s+e)/2;
    if(e==s)
    {
        return s;
    }
        else if(arr[mid]<arr[mid-1]) 
        {
         
           return mid-1;
        }
        else if(arr[mid]>arr[mid+1])
        {
            return mid;
        }
       else if(arr[s]>arr[mid])
       {
           e=mid-1;
       }
       else{
           s=mid+1;
       }
    }
    return -1;
 }