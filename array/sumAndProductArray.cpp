#include <iostream>
using namespace std;


int sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    };
    return sum;
}

int product(int arr[], int size) {
    int product = 1;
    for (int i = 0; i < size; i++) {
        product *= arr[i];
    };
    return product;
}

int main () {

    int nums[] = {1, 2, 3, -2, 18};
    int size = 5;
        
    cout << product(nums, size);

    return 0;
}