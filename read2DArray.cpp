#include <iostream>
using namespace std;

int main()
{

    int arr[3][3];
    int row = 3;
    int col = 3;

    // row-wise input
    cout << "row-wise input" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the input for row index " << i << " Enter the input for col index " << j << endl;
            cin >> arr[i][j];
        }
    }

    // //row-wise access
    // cout<<"row-wise access"<<endl;
    // for(int i=0;i<row;i++)
    // {
    //     for(int j=0;j<col;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    // }

    // column-wise access
    //  cout<<"col-wise input"<<endl;
    //      for(int i=0;i<col;i++)
    //      {
    //          for(int j=0;j<row;j++)
    //          {
    //               cout<<"Enter the input for row index "<<i<< " Enter the input for col index "<<j<<endl;
    //              cin>>arr[j][i];
    //          }
    //      }

    // column-wise access
    cout << "col-wise access" << endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[j][i] << " ";
        }
    }
}
