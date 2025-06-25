// CPP Program to demonstrate the increment
// and decrement operators
#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	cout << "a++ is " << a++ << endl;
	cout << "++a is " << ++a << endl;

	int b = 15;
	cout << "b-- is " << b-- << endl;
	cout << "--b is " << --b << endl;
	
	return 0;
}

// CPP Program to demonstrate the Binary Operators
#include <iostream>
using namespace std;

int main()
{
	int a = 8, b = 3;

	// Addition operator
	cout << "a + b = " << (a + b) << endl;
	
	// Subtraction operator
	cout << "a - b = " << (a - b) << endl;
	
	// Multiplication operator
	cout << "a * b = " << (a * b) << endl;
	
	// Division operator
	cout << "a / b = " << (a / b) << endl;
	
	// Modulo operator
	cout << "a % b = " << (a % b) << endl;

	return 0;
}

// CPP Program to demonstrate the Logical Operators
#include <iostream>
using namespace std;

int main()
{
	int a = 6, b = 4;

	// Logical AND operator
	cout << "a && b is " << (a && b) << endl;
	
	// Logical OR operator
	cout << "a || b is " << (a || b) << endl;
	
	// Logical NOT operator
	cout << "!b is " << (!b) << endl;

	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int a = 10, b = 4;
	bool res = ((a == b) && cout << "GeeksQuiz");
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int a = 10, b = 4;
	bool res = ((a != b) && cout << "GeeksQuiz");
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	int a = 10, b = 4;
	bool res = ((a != b) || cout << "GeeksQuiz");
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	int a = 10, b = 4;
	bool res = ((a == b) || cout << "GeeksQuiz");
	return 0;
}