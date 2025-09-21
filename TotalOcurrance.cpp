#include <iostream>
#include <vector>
#include <set> //header for set
using namespace std;


int FirstOccurance(vector<int> arr, int target);
int  LastOccurance(vector<int> arr, int target);
int TotalOccurance(vector<int> arr, int target);

int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 3, 4, 8, 9};
    int target = 3;
    
  cout<<"Total Ocuurance : "<<TotalOccurance( arr, target);
     
}

int TotalOccurance(vector<int> arr, int target)
{

int first = FirstOccurance(arr, target) ;
int last = LastOccurance(arr, target) ;
int total=(last-first)+1;
return total;
}




//1st occurance
int FirstOccurance(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size();
    int mid = (start + end) / 2;
    int index=-1;
    while (start <= end)
    {
        if (target == arr[mid])
        {
            index=mid;//store it
            end = mid - 1;//go to left
          
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }

        mid = (start + end) / 2; // update don't forget
    }

    return index;
}

int  LastOccurance(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size();
    int mid = (start + end) / 2;
    int index=-1;
    while (start <= end)
    {
        if (target == arr[mid])
        {
            index=mid;//store it
            start = mid + 1;//go to right
          
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }

        mid = (start + end) / 2; // update don't forget
    }

    return index;
}