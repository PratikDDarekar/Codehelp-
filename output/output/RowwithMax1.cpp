#include <iostream>
#include <vector>
using namespace std;

vector<int> rowAndMaximumOnes(vector<vector<int>> &mat);
int main()
{
    vector<vector<int>> mat = {{1, 0, 0, 1, 0},
                               {1, 0, 1, 1, 0},
                               {1, 1, 1, 1, 1},
                               {1, 0, 1, 1, 1}};
    rowAndMaximumOnes(mat);
}

vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
{

    vector<int> ans;
    int oneCount = INT32_MIN;
    int rowno = -101;

    for (int i = 0; i < mat.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < mat[i].size(); j++)
        {
            if (mat[i][j] == 1)
            {
                count++;
            }
        }
        if (count > oneCount)
        {
            oneCount = count;
            rowno = i;
        }
    }
    ans.push_back(rowno);
    ans.push_back(oneCount);

    return ans;
}