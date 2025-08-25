#include <iostream>
using namespace std;


int decToBinary(int dec) {
    int ans = 0;
    int pow = 1;

    while (dec > 0) {
        int rem = dec % 2;
        dec /= 2;
        ans += rem * pow;
        pow *= 10;
    }
    return ans;
} 

int binToDec(int binary) {
    int ans = 0;
    int power = 1;

    while (binary > 0) {
        int rem = binary % 10;
        ans += rem * power;
        binary /= 10;
        power *= 2;
    }

    return ans;
}
 
int main () {
    cout << sizeof(unsigned int) << endl;
    return 0;
}