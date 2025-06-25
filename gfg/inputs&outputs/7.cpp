#include<iostream>
using namespace std;
int main()
{
    double x = 1.2300;
    cout << x << '\n';
    double y = 1567.56732;
    cout << y << '\n';
    double z = 1244567.45;
    cout << z << '\n';
    double w = 124456.67;
    cout << w << '\n';
    double u = 123e+2;
    cout << u << '\n';
    return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout << setprecision(4);
    double x = 15.5683, y = 34267.1;
    cout << x << ' ' << y << ' ' << '\n';
    double z = 1.23;
    cout << showpoint << z << '\n';
    cout << showpos   << z << '\n';
    cout << uppercase << y << '\n';
    return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x = 1.23, y = 1122456.453;
    cout << std::fixed;
    cout << x << "\n"
         << y << "\n";
    cout << std::setprecision(2);
    cout << x << "\n"
         << y << "\n";
    double z = 1.2e+7;
    cout << z;
    return 0;
}