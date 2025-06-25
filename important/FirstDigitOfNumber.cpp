#include <bits/stdc++.h>
using namespace std;

// Function to find the first digit of a number
int find_first_digit(int n) {
    while (n >= 10) { // Loop until the number becomes a single digit
        n = n / 10;
    }
    return n; // Return the single-digit number
}

int main() {
    int n; 
    cin >> n; // Input the number
    cout << find_first_digit(n); // Print the first digit
    return 0;
}