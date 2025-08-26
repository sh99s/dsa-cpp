#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {1,2,1,2,1, 11};
    int n = nums.size();
    //sorting of vector
    sort(nums.begin(), nums.end());
    int freq = 1; int ans = nums[0]; 
    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i-1]){
            freq++;
        }else{
            freq = 1;
            ans = nums[i];
        }
        if (freq > n/2){
            return ans;
        }
    }

    return ans;
}