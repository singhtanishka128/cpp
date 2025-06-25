// C++ program to demonstrate
// working of Assignment operators

#include <iostream>
using namespace std;

int main()
{

	// Assigning value 10 to a
	// using "=" operator
	int a = 10;
	cout << "Value of a is "<<a<<"\n";

	// Assigning value by adding 10 to a
	// using "+=" operator
	a += 10;
	cout << "Value of a is "<<a<<"\n";

	// Assigning value by subtracting 10 from a
	// using "-=" operator
	a -= 10;
	cout << "Value of a is "<<a<<"\n";

	// Assigning value by multiplying 10 to a
	// using "*=" operator
	a *= 10;
	cout << "Value of a is "<<a<<"\n";

	// Assigning value by dividing 10 from a
	// using "/=" operator
	a /= 10;
	cout << "Value of a is "<<a<<"\n";

	return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int x = 10, y = 20 ; 
    cout << (x<y) << "\n" 
         << (x>y) << "\n"
         << (x==y) << "\n"
         << (x>=y) << "\n"
         << (x<=y) << "\n"
         << (x!=y) << "\n";
    return 0;
}

