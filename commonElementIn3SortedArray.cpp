#include <iostream>
#include <vector>
#include <set> //header for set
using namespace std;

// Function declaration
vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3);

int main()
{
    int A[] = {1, 5, 10, 20, 40, 80};
    int B[] = {6, 7, 20, 80, 100};
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};

    int n1 = 6;
    int n2 = 5;
    int n3 = 8;

    vector<int> ans = commonElements(A, B, C, n1, n2, n3);

    cout << "Common elements are: ";
    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    int i = 0, j = 0, k = 0;
    vector<int> result;
    set<int> st; // using STL set

    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            st.insert(A[i]); // inserting into set for no duplicate
            // result.push_back(A[i]);
            i++;
            j++;
            k++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    // reason written on paper
    for (auto i : st)
    {
        result.push_back(i);
    }
    return result;
}
