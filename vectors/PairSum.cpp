#include <iostream>
#include <vector>
#include <algorithm>  // for sort()
using namespace std;

vector<int> pairSum(){
    int n = 4;
    int arr[4] = {2, 7, 11, 15};
    int target = 9;
    int ps = 0;
    vector<int> ans;  // Declare the vector
    
    // For two-pointer approach, array must be sorted
    // Create a vector to sort (since we can't sort a plain array easily)
    vector<int> sortedArr(arr, arr + n);
    sort(sortedArr.begin(), sortedArr.end());
    
    int start = 0; 
    int end = n - 1; 
    
    while (start < end) {  // Use while loop, not for loop
        ps = sortedArr[start] + sortedArr[end];  // Fixed typo: arrr -> sortedArr
        
        if (ps < target) {
            start++;
        }
        else if (ps > target) {  // Use else if for better logic
            end--;
        }
        else {  // ps == target
            ans.push_back(sortedArr[start]);  // Fixed typo and semicolon
            ans.push_back(sortedArr[end]);
            return ans; 
        }
    }
    
    // If no pair found, return empty vector
    return ans;
}

int main() {
    vector<int> result = pairSum();
    
    cout << "Ans: ";
    if (!result.empty()) {
        cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No pair found" << endl;
    }
    
    return 0;
}