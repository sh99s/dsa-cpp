#include <iostream>
using namespace std;

int main () {

    // calculate smallest num in array

    int nums[] = {1, 2, 3, -2, 18};
    int size = 5;
    int smallest = INT_MAX; // + infinity 
    int largest = INT_MIN; // - infinity
    int index;
    
    for (int i = 0; i < size; i++) {
        if (nums[i] > largest)  {
            largest = nums[i];
            index = i;
        };
    };

    cout << "largest: " << largest << " index: " << index << endl;
     


    return 0;
}