#include <iostream>
using namespace std;

void count(int arr[], int size);

int main()
{
    int arr[]={1,0,1,0,0,0,0,1,1,0};
    int size=10;
     count(arr,size);
}

void count(int arr[], int size)
{
    int zcnt=0;
    int ocnt=0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            zcnt++;
        }
        else
        {
            ocnt++;
        }
    }
    cout<<"Zero Count = "<<zcnt<<" One Count = "<<ocnt;
}