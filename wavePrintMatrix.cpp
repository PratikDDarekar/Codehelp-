#include <iostream>
#include <vector>
#include <set> //header for set
using namespace std;


void wavePrintMatrix(vector<vector<int>>v);

int main(){
    vector<vector<int>>v={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
        };

  wavePrintMatrix(v);


}

void wavePrintMatrix(vector<vector<int>>v)
{
int m=v.size();
int n=v[0].size();

for(int startCol=0;startCol<n;startCol++)
{
    if((startCol & 1)==0){
    for(int j=0;j<m; j++ )
    {
        cout<<v[j][startCol]<<" ";
    }
   }
   else{
    for(int j =m-1;j>=0;j--)
    {
         cout<<v[j][startCol]<<" ";
    }
   }
}

}