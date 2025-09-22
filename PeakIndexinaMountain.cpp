#include <iostream>
#include <vector>
#include <set> //header for set
using namespace std;


 int PeakIndexInMountainArray( vector<int>arr,int n);

int main()
{
    vector<int>arr={10,20,30,60,30};
    int n= arr.size();
   cout<<PeakIndexInMountainArray(arr, n);
}

 int PeakIndexInMountainArray( vector<int>arr,int n)
 {
    int s=0;
    int e= n-1;
    int mid= (s+e)/2;
    int ans=-1;

    while(s<e)
    {
        if(arr[mid]<arr[mid+1])
        {
            //A wali line pe hu
            //peak right mein exist krta hain
            s=mid+1;//here we are standing on A's part so go Right
        }
        else{
            //yaa toh mai B line pr hu
            //ya Peak element pr hu
            e=mid;//keep it mid instead of mid-1 because here we are standing on the b's part or on the Peak index part therefore go Left just with e=mid

        }
         mid= (s+e)/2;  //don't forget to update
    }
    return arr[mid];
 }