#include <iostream>
using namespace std;


int main () {
    int maxSum = INT_MIN;
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    
    // {

        // for (int i = 0; i < n; i++) {
            //     int currentSum = 0;
            
            //     for (int j = i; j < n; j++) {
                //         currentSum += arr[j]; //last eelement of array
                //         maxSum = max(currentSum, maxSum);
                //     } 
                
                // }
            // }// brute force

    // most optimised approach kadane's algorithm;

    int currentSum = 0;

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);

        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    cout << "Max Sum of Subarray: " << maxSum << endl;

}