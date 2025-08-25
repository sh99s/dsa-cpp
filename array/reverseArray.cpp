#include <iostream>
using namespace std;

void reversedArray(int nums[], int size) {
 
    int start = 0, end = size - 1; 
    while(start < end){
        swap(nums[start],  nums[end]);
        start++;
        end--;
    };
}


int main () {

    int nums[] = {1, 2, 3, -2, 18};
    int size = 5;
    reversedArray(nums, size);

    for (int i = 0; i < size; i++) {
        cout << nums[i] << " "; 
    }
}