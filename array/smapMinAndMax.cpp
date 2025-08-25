#include <iostream>
using namespace std;


int swapMinAndMAx(int arr[], int size) {
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++) {
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]);

    };
    swap(smallest, largest);
        cout << "largest: " << largest << " " << "Smallest: " << smallest << endl;
    return 0;
}


int main () {

    int nums[] = {1, 2, 3, -2, 18};
    int size = 5;
        
  swapMinAndMAx(nums, size);

    return 0;
}