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


    
    for(int i=0;i<row;i++)
    {        
    for(int j=i;j<col;j++)
    {    
            swap(arr[i][j], arr[j][i]);
      
          // cout<<arr[i][j];
    }      // cout<<endl; 
    }  

    //or


    // for(int i=0;i<row;i++)
    // {        
    // for(int j=0;j<col;j++)
    // {
    //     if(i<j)
    //     {
    //         swap(arr[i][j], arr[j][i]);
           
    //     }
    // }    
    // }


    // row-wise access
    cout << "row-wise access" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
             cout<<endl;
    }
}