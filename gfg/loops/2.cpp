#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    for (int x = 2; x <= n; x++) {
        if (n % x == 0) {
            cout << "Smallest Divisor: " << x << endl; 
            break;
        }
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 5) {
        if (i == 3) {
            break;
        }
        cout << i << " ";
        i++;
    }
    cout << i << " ";
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n, x;
    cout << "Enter n \n";
    cin >> n;
    cout << "Enter x \n";
    cin >> x; 
    for (int i = 1; i <= n; i++) {
        if (i % x == 0)
            continue;
        cout << i << " ";
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 6)
            continue;
        cout << i << " ";
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n:\n";
    cin >> n;

    for (int x = 1; x <= n; x++) {
        for (int i = 1; i <= 10; i++) {
            cout << (x * i) << " ";
        }
        cout << "\n";
    }
    return 0;
}

// C++ Program to print all prime factors
// of a number using nested loop

#include <bits/stdc++.h>
using namespace std;

/* Driver program to test above function */
int main()
{
    int n = 315;
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        cout << 2;
        n = n / 2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            cout << i;
            n = n / i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        cout << n;
    return 0;
}

