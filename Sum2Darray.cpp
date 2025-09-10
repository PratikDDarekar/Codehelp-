#include <iostream>
using namespace std;


int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int col = 3;
    int row = 3;
  
//row-wise
cout<<"row-wise"<<endl;
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
        {
            sum += arr[i][j];
        }
        cout<<sum<<endl;
    }

    //column-wise
    cout<<"column-wise"<<endl;
    for(int i=0;i<col;i++)
    {
        int sum=0;
        for(int j=0;j<row;j++)
        {  
            sum += arr[j][i];
        }
        cout<<sum<<endl;
    }

    // //diagonal-wise
    // int sum=0;
    // cout<<"diagonal-wise"<<endl;
    // for(int i=0;i<col;i++)
    // {
        
    //     for(int j=0;j<row;j++)
    //     {  if(i==j)
    //         sum += arr[j][i];
    //     }        
    // }
    // cout<<sum<<endl;

    //or
     //diagonal--wise
    int sum=0;
    cout<<"diagonal-wise"<<endl;
    for(int i=0;i<col;i++)
    {      
      sum += arr[i][i];
               
    }
    cout<<sum<<endl;
}