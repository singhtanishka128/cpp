#include <iostream>
using namespace std;

int main()
{
    cout << x;  // Error: x is not declared yet
    return 0;
}

int x = 10;

#include <iostream>
using namespace std;

extern int x; 
int main()
{
    cout << x;  
    return 0;
}
int x = 10;