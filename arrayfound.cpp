#include <iostream>
using namespace std;

bool arrayprint(int arr[], int size, int target)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            return true;
        }
    }
    return false;
}

int main()
{
int array[5]={1,3,5,4,6};
int size = 5;
int target=6;
bool found=arrayprint(array, size,target);

if(found)
{
    cout<<"found";
}
else
{
    cout<<"not found";
}
}