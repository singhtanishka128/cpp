//sizeof(value/variable/datatype) returns bits occupied by that data type in the current system
//typeid(variable).name() returns the datatype initial of that variable i for int, d for double, pi for pointer to int
//static int variable=value; can retain the value throughtout the program despite the times function is being invoked
//invoke = function call/initiate, revoke=terminate/stop/remove
/*swapping 2 :
temp=a;
a=b;
b=temp;*/
/*char s stores character, char s[] can store string, const char *s = "gfg";Internally: "gfg" = ['g', 'f', 'g', '\0']
const char * – a pointer to a constant character
This means s is a pointer that points to the first character of the string.
The const means you can’t modify the characters the pointer is pointing to.
s – the actual pointer variable
It stores the memory address of the first character 'g' in "gfg".*/
//anything non zero is true is 1.
/* Implicit Type Conversion Also known as ‘automatic type conversion’.
Done by the compiler on its own
Explicit Type Conversion: This process is also called type casting and it is user-defined. Here the user can typecast the result to make it of a particular data type.
ex:
double z= double(x)/y;int b = static_cast<int>(f);*/

/*Header files
1.iostream for input output: cin cout
2.iomanip for manipulators: setw setfill 
ex:
cout << std::setw(5);      
cout << std::setfill('*');
cout << std::left;// Left-align the output
ex:
bool a = true;
    cout << a << "\n";        // 1
    cout << std::boolalpha;   // Set output to true/false
    cout << a << "\n";        // true
    cout << std::noboolalpha; // Set output back to 0/1
    cout << a;                // 1

int a = 26, b = 20;
cout << a << " " << b << "\n";  // 26 20
cout << std::hex;
cout << a << " " << b << "\n";  // 1a 14
cout << std::oct;
cout << a << " " << b << "\n";  // 32 24
cout << std::dec;
cout << a << " " << b << "\n";  // 26 20

3.fstream for file reading
4.cmath for math functions like pow, log
5.#include <bits/stdc++.h> — the “bad boy” of C++ headers
#include <bits/stdc++.h>
is kinda like saying:
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>
#include <set>
#include <queue>
#include <stack>
// ...and like 50 more
*/
// \t\t for spacing \n & endl for next line

/*bitwise operator:

Example 1: Bitwise AND (&)
#include <iostream>
using namespace std;
int main() {
    int x = 3;  // Binary: 0011
    int y = 6;  // Binary: 0110
​
    cout << (x & y); // Perform bitwise AND
    return 0;
}
Explanation:
3 in binary: 0011
6 in binary: 0110
AND: 0010
Output: 2

Example 2: Bitwise OR (|)
#include <iostream>
using namespace std;
int main() {
    int x = 3;  // Binary: 0011
    int y = 6;  // Binary: 0110
​
    cout << (x | y); // Perform bitwise OR
    return 0;
}
Explanation:
3 in binary: 0011
6 in binary: 0110
OR: 0111
Output: 7

Example 3: Bitwise XOR (^)
#include <iostream>
using namespace std;
int main() {
    int x = 3;  // Binary: 0011
    int y = 6;  // Binary: 0110
    cout << (x ^ y); // Perform bitwise XOR
    return 0;
}
Explanation:
3 in binary: 0011
6 in binary: 0110
XOR: 0101
Output: 5

Example 4 : Left Shift Operator (<<)
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
Explanation of the Code
Variable Initialization:
x = 3: Binary representation: 0000...0011.
y = 4: Binary representation: 0000...0100.
Shift Left by 1 (x << 1):
Shifting 3 (0000...0011) left by 1 position: 0000...0110.
Result = 6.
Shift Left by 2 (x << 2):
Shifting 3 (0000...0011) left by 2 positions: 0000...1100.
Result = 12.
Shift Left by y (x << y):
Shifting 3 (0000...0011) left by 4 positions: 0000...110000.
Result = 48.
Output:
The program outputs:
6 for x << 1.
12 for x << 2.
48 for x << y

Example 5 : Right Shift Operator (>>)
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
Explanation of the Code
Variable Initialization:
x = 33: Binary representation: 0000...100001.
y = 4: Binary representation: 0000...0100.
Right Shift Operations:
x >> 1: Shifts x (33) right by 1 bit (0000...100001 → 0000...010000), result = 16.
x >> 2: Shifts x (33) right by 2 bits (0000...100001 → 0000...001000), result = 8.
x >> y: Shifts x (33) right by 4 bits (0000...100001 → 0000...000010), result = 2.
Output:
First cout outputs 16.
Second cout outputs 8.
Third cout outputs 2.
}*/


/*switch case -alternative to if else
Syntax: 
switch(expression)
{    
case value1:    
statement_1; 
break;
    
case value2:    
statement_2; 
break;

.....
.....
.....
case value_n:    
statement_n; 
break;

default:     
default statement;
 
} 
ex:
#include <iostream>
using namespace std;

int main() {
    int x = 0, y = 0;
    cout << "Enter a choice (L, R, U, D):\n";
    char move;
    cin >> move;

    switch (move) {
        case 'L': 
            x--;  // Move left
            break;
        case 'R': 
            x++;  // Move right
            break;
        case 'U': 
            y++;  // Move up
            break;
        case 'D': 
            y--;  // Move down
            break;
        default: 
            cout << "Invalid choice";
    }

    cout << "New Position: " << x << " " << y << '\n';
    return 0;
}
*/
//loops: entry controlled-for,while ; exit controlled-do while
/*
while:
#include <iostream>
using namespace std;
int main() {
    int i = 0;
    while (i < 5) {
        cout << "GfG\n";
        i++;
    }
    return 0;
}
    
for:
#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i < 3; i++) {
        cout << "GfG\n";
    }
    return 0;
}
    
do while:
#include <iostream>
using namespace std;
int main() {
    int i = 3;
    do {
        cout << "GfG\n";
        i++;
    } while (i < 3);

    return 0;
}
*/
/*default argument value for int is 0, for string is NA
Default Arguments Must Appear at the End*/
/*
functions:

1.Declaration or Prototype

int getMax(int x, int y); 

2.Definition

int getMax(int x, int y) { 
    if (x > y)
        return x;
    else
        return y;
}

3.Calling

int main() {
    int a = 10, b = 20;
    cout << getMax(a, b); 
    return 0;
}
*/

/*
inline function
Example:

#include <iostream>
using namespace std;

inline int getMax(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    cout << getMax(10, 20); // Output: 20
    return 0;
}
#include <iostream>
using namespace std;
​
inline int getMax(int x, int y) {
    return (x > y) ? x : y;
}
​
int main() {
    cout << getMax(10, 20); // Output: 20
    return 0;
}

In this example:
The getMax function is defined as inline.
During compilation, the compiler replaces getMax(10, 20) with (10 > 20) ? 10 : 20 to avoid the function call overhead.*/

//Function overloading is a concept that allows multiple functions with the same name but different parameter lists.
//parameters are in function definition, arguments are in function call.

/*
#include<iostream>
using namespace std;

// Single sum function with default parameters
int sum(int a, int b, int c = 0, int d = 0) {
    return a + b + c + d;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << sum(a, b) << endl;       // sum of 2 numbers
    cout << sum(a, b, c) << endl;    // sum of 3 numbers
    cout << sum(a, b, c, d) << endl; // sum of 4 numbers

    return 0;
}
*/

/*
array declaration
index starts from 0
int arr1[10];
int arr[4] = { 10, 20, 30, 40};
access data : arr[index]
Address of arr[2] = Address of arr[0] + (2 * sizeof(int))

int* arr = new int[10]; // Dynamically allocated fixed-size array
delete[] arr;           // Manually deallocate memory*/

/*
// Calculate and print the total size of the array
 int arr[] = {10, 20, 30, 40, 50};
cout << sizeof(arr) << "\n"; // Output: 20
Total Size = Number of Elements * Size of Each Element
Total Size = 5 * 4 = 20 bytes
*/

/*
// Calculate the number of elements in the array
int arr[] = {10, 20, 30, 40, 50};
int n = sizeof(arr) / sizeof(arr[0]);
cout << n << "\n"; // Output: 5
Number of Elements = Total Size / Size of Each Element
Number of Elements = 20 / 4 = 5
*/

/*total elements=array length
display array:
normal loop
for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

range based for loop(to display)
 int arr[] = {10, 40, 30, 45};

    for (int x : arr) {
        cout << x << " ";
    }
(to modify we use &x instead of x)
*/
/*arr[2] = 7;
-arr[2] = -7;
*/




