#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your number:\n";
    cin >> n;  

    if (n % 2 == 0) { 
        cout << "Even \n";  
    } else {
        cout << "Odd \n";  
    }

    return 0;
}

#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number:\n";
    cin >> n;
    if(n>0)
    {
        cout << "Positive \n";
    }
    else if(n<0)
    {
        cout << "Negative \n";
    }
    else
    {
        cout << "Zero \n";
    }
    return 0;
    
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number:\n";
    cin >> n;

    if (n > 0) {  
        cout << "Positive ";
        if (n % 2 == 0) {  
            cout << "Even\n";
        } else { 
            cout << "Odd\n";
        }
    } else if (n < 0) {  
        cout << "Negative ";
        if (n % 2 == 0) {  
            cout << "Even\n";
        } else {  
            cout << "Odd\n";
        }
    } else {  
        cout << "Zero\n";
    }

    return 0;
}