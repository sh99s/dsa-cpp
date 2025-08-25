#include <iostream>
using namespace std;

// sum of 1 to n
int sum(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += i;
    }
    return total;
}

// factorial of n
int factorial(int n) {
    int product = 1;
    for (int i = 1; i <= n; i++) {
        product *= i;
    }
    return product;
}

int digitSum (int n) {
    int total = 0;
    
    while (n > 0) {
       total += n % 10; // remainder is giving last digit each time
       n = n / 10;  // division is reducing digit by one
    }
    return total;
}


// ncr (binomial sum function) = n!/((n-r)! * r!)

int binomial(int n, int r) {
    return factorial(n)/((factorial(n-r)* factorial(r)));
}

// check if prime or not

int isPrime(int n) {
    int num = 2;
    if (n <= 0) {
        cout<<"Invalid.";
        return -1;

    }
    if (n == 1) {
         cout<<"Neither prime nor composite.";
         return -1;
    }
    if (n == 2) {
        return 0;
    }
    for (int i = 3; i < n; i++) {
        if (n % i == 0) {
            return -1;
        }
        cout<<num<<endl;
        num++ ;
    }
    return 0;
} 

int main () {
    cout << isPrime(17);
    return 0;
}