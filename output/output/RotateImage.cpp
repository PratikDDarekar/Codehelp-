#include <iostream>
#include <vector>
#include <algorithm>//don't forget to include
using namespace std;

void rotateImage(vector<vector<int>> &matrix);
void reverseVector(vector<int>&arr);

int main()
{
    vector<vector<int>> matrix = {{1, 2,3},
                               {4,5,6},
                               {7,8,9},
                               };
    rotateImage(matrix);
}

void rotateImage(vector<vector<int>> &matrix)
{
    //transpose
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=i;j<matrix[i].size();j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
//reverse
   for(int i=0;i<matrix.size();i++){
   // reverse(matrix[i].begin(),matrix[i].end());    // by using utility function

    reverseVector(matrix[i]);  //by using reverse function
   }


//print
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[i].size();j++)
        {
          cout<<matrix[i][j];
        }
        cout<<endl;
    }
}

void reverseVector(vector<int>&arr)
{
    int n=arr.size();
    int start =0;
    int end=n-1;

    for(int i=0;i<n;i++)
    {
        swap(arr[start],arr[end]);

        start++;
        end--;
    }



}