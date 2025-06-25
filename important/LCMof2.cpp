#include<iostream>
using namespace std;

// Function to calculate the GCD of two numbers using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the LCM using the GCD
int lcm(int a, int b) {
    // Handle edge case when either number is 0
    if (a == 0 || b == 0) {
        return 0; // LCM of 0 with any number is 0
    }
    
    return (a * b) / gcd(a, b);
}

int main() {
    // Hardcoding the input
    int a = 6, b = 9;
    
    // Calculating LCM
    int result = lcm(a, b);
    
    // Output the result
    cout << result << endl;
    
    return 0;
}