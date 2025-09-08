#include <iostream>
//#include<climits>
#include<limits.h>
using namespace std;


int  minarrelem(int arr[], int size);

int main()
{
    int arr[]={5,62,48,-452,56};
    int size=5;

    int ans = minarrelem(arr,size);
    cout<<"Minimum Ans is : "<<ans;

}

int minarrelem(int arr[], int size)
{
    int min=INT_MAX;

    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}