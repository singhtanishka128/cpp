#include <iostream>
using namespace std;

int main()
{
    int x, y;
    
    cout << "Enter the first integer: \n";
    cin >> x; // Input stored in the buffer and then assigned to x

    cout << "Enter the second integer: \n";
    cin >> y; // Input stored in the buffer and then assigned to y

    cout << "Multiplication is: " << (x * y) << '\n';
    return 0;
}

