#include <iostream>
using namespace std;

int main() {
    int x = 3;  // Binary: 0011
    int y = 6;  // Binary: 0110

    cout << (x & y); // Perform bitwise AND
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int x = 3;  // Binary: 0011
    int y = 6;  // Binary: 0110

    cout << (x | y); // Perform bitwise OR
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int x = 3;  // Binary: 0011
    int y = 6;  // Binary: 0110

    cout << (x ^ y); // Perform bitwise XOR
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int x = 3;  // Binary: 0000...0011
    cout << (x << 1) << endl;  // Shift left by 1
    cout << (x << 2) << endl;  // Shift left by 2

    int y = 4;  // Binary: 0000...0100
    int z = (x << y);          // Shift left by 4
    cout << z;                 // Output the result

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int x = 33;  // Binary: 0000...100001
    cout << (x >> 1) << endl;  // Shift right by 1
    cout << (x >> 2) << endl;  // Shift right by 2

    int y = 4;  // Binary: 0000...0100
    int z = (x >> y);          // Shift right by 4
    cout << z;                 // Output the result

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    unsigned int x = 1;  // Binary: 0000...0001
    cout << (~x) << endl; // Perform bitwise NOT on x

    x = 5;  // Binary: 0000...0101
    cout << (~x) << endl; // Perform bitwise NOT on x

    return 0;
}

