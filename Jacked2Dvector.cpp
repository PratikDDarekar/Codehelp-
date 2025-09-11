#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector< vector<int> >arr;

    arr.push_back(vector<int>(5,10) );
    arr.push_back(vector<int>(3,5) );
    arr.push_back(vector<int>(4,2) );
    arr.push_back(vector<int>(5,9) );
    arr.push_back(vector<int>(7,4) );
    arr.push_back(vector<int>(6,8) );


    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}