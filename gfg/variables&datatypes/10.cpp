#include <iostream>
using namespace std;

int main() {
    const int x = 10; 
    x = x + 1;         // Compiler error: Cannot modify a const variable
    cout << x;
    return 0;
}

#include <iostream>
using namespace std;

const double PI = 3.14;  

int main() {
    int r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    cout << "Area of the circle is: " << PI * r * r;
    return 0;
}

