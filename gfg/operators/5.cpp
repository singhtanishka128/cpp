#include <bits/stdc++.h>
using namespace std;

// Deleting element while you go

int main() {
    int d = 0;  // The current day (0 = Sunday)
    int n = 9;  // Days to go back

    // Step 1: Calculate the cyclic range of N
    int x = n % 7;

    // Step 2: Subtract the value from D
    int ans = d - x;

    // Step 3: Handle negative results
    if (ans >= 0)
        cout << ans;
    else
        cout << ans + 7;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = -235;  // Input number
    int ans = abs(x % 10);  // Find the last digit using modulus and convert to positive if needed

    cout << ans;  // Output the last digit
    return 0;
}

// CPP program to find sum of first
// n natural numbers.
#include <iostream>
using namespace std;

// Driver code
int main()
{
    int n = 5;
    int sum = 0;
    for (int x = 1; x <= n; x++)
        sum = sum + x;
    cout << sum;
    return 0;
}

