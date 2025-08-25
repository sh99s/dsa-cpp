#include <iostream>
using namespace std;

int findTarget(int target, int arr[], int size) {
    for (int i = 0; i < size; i++){
        if (target == arr[i]) {
            return i;
        };
    };
    return -1;
}


int main () {

    int nums[] = {1, 2, 3, -2, 18};
    int size = 5;
    int target = 1;

    cout << findTarget(target, nums, size) << endl; 
}