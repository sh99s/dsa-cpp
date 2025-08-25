#include<iostream>
#include<vector> //<bits/c++>
using namespace std;

int main () {
    vector<int> vec; //size = 0
    vector<int> vector1 = {1,2,3}; 
    
    // some function on vectors
    cout << "Size " << vec.size() << endl;
    vec.push_back(12);
    vec.push_back(122);
    vec.push_back(122);
    vec.push_back(2122);
    cout << "Size " << vec.size() << endl;
    cout <<vec.back() << endl;
    cout <<vec.front() << endl;
    vec.at(0);
    cout << "Capacity: " << vec.capacity() << endl;

    for (int i: vec){ // for each loop on vectors
        cout << i << endl;
    }
    return 0;
}

