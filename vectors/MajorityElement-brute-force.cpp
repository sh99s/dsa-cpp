#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {1,2,1,2,1, 11, 11, 11, 11, 11, 11};
    int n = nums.size();

    for (int value: nums) {
        int count = 0;
        
        for (int element: nums) {
            if (element == value) {
                count++;
            }
        }

        if (count > n/2){
            cout << value << endl;
            return value;
        }

    }


    return 0;
}