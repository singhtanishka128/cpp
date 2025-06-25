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