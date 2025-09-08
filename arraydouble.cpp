#include <iostream>
using namespace std;

int main()
{
    int arr[5]={5,10,15,20,25};
    int sum=0;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]*2<<" ";
        sum+=arr[i];
    }
    cout<<"sum : "<<sum<<endl;
}