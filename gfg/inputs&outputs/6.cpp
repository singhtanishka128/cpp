#include <iostream>
using namespace std;

int main()
{
    bool a = true;
    cout << a << "\n";        // 1
    cout << std::boolalpha;   // Set output to true/false
    cout << a << "\n";        // true
    cout << std::noboolalpha; // Set output back to 0/1
    cout << a;                // 1

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int a = 26, b = 20;
    cout << a << " " << b << "\n";  // 26 20
    cout << std::hex;
    cout << a << " " << b << "\n";  // 1a 14
    cout << std::oct;
    cout << a << " " << b << "\n";  // 32 24
    cout << std::dec;
    cout << a << " " << b << "\n";  // 26 20
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int a = 26;
    cout << std::showbase;
    cout << std::oct;
    cout << a << "\n";  // 032
    cout << std::hex;
    cout << a << "\n";  // 0x1a
    cout << std::showbase;
    cout << a << "\n";  // +0x1a
    cout << std::uppercase;
    cout << a << "\n";  // +0X1A
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 12;
    cout << std::setw(5);          // Set width to 5
    cout << std::setfill('*');     // Set fill character to '*'
    cout << a << "\n";             // ***12
    cout << std::setw(5);
    cout << "Hi" << "\n";          // ***Hi
    cout << std::left;             // Left-align the output
    cout << std::setw(5);
    cout << a << "\n";             // 12***
    return 0;
}

