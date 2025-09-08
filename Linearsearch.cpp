#include <iostream>
using namespace std;

void findTarget(int target, int arr[]); // 👈 Function prototype

int main() {
    int arr[5] = {5, 10, 15, 20, 25};
    int target = 25;

    findTarget(target, arr);
}

void findTarget(int target, int arr[]) {
    bool flag = false;
    for(int i = 0; i < 5; i++) {
        if(arr[i] == target) {
            flag = true;
            break;
        }
    }

    if(flag) {
        cout << "Found";
    } else {
        cout << "Not Found";
    }
}