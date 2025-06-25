#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int lastDigit = abs(num % 10); // abs() handles negative numbers too

    cout << "Last digit: " << lastDigit << endl;

    return 0;
}
