#include <bits/stdc++.h>
using namespace std;

// CPP Program to find nth term of geometric progression
int main() {
    // Starting number
    int a = 2;

    // Common ratio
    int r = 3;

    // Nth term to be found
    int N = 3;

    // Calculate the Nth term
    int ans = a * (int)(pow(r, N - 1));

    // Display the output
    cout << ans;

    return 0;
}