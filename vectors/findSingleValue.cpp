#include<iostream>
#include <vector>
using namespace std;

// find the the single unique value in an array where each element (except one) is repeating twice

int singleValue(vector<int>& nums){
    int num = 0;

    for (int value: nums) {
        num ^= value;
    }
    
    return num;
}

int main () {

    vector <int> vect = {1, 2, 2, 1, 7};

    cout << singleValue(vect) << endl;
    return 0;
}