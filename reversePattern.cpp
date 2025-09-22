
#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    for (int i = 1; i < 5; i++)
    {
        int end = count + i - 1;
        for (int j = end; j >= count; j--)
        {
            cout << j;
        }
        cout << endl;
        count = end + 1;
    }
    return 0;
}