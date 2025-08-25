#include <iostream>

using namespace std;

void uniqueValues(int nums[], int size) {

    int unique = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j< size; j++){
            if (nums[i] != nums[j]) {
                unique = nums[i];
            }
            cout << unique;
        }
    }
};

int main () {
    int nums[5] = {1, 2, 3, 3, 2};
    int size = 5;

    uniqueValues(nums, size);
    return 0;
}