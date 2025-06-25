#include <iostream>
using namespace std;
int x = 20;  // Global variable
int main()
{
    int x = 10;  // Local variable
    cout << x;   
    return 0;
}

#include <iostream>
using namespace std;

int x = 20; 
int main()
{
    int x = 10; 
    {
        int x = 30;  
        cout << x;  
    }
    return 0;
}

#include <iostream>
using namespace std;
int x = 20; 
int main()
{
    int x = 10;  
    int x = 20;  // Error: Redefinition of x in the same scope
    cout << x;
    return 0;
}