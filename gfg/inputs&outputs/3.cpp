#include <iostream>
using namespace std;

int main()
{
	int age;

	cout << "Enter your age:";
	cin >> age;
	cout << "\nYour age is: " << age;

	return 0;
}

// C++ program to demonstrate the taking
// multiple inputs from the user
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	string name;
	int age;

	// Take multiple input using cin
	cin >> name >> age;

	// Print output
	cout << "Name : " << name << endl;
	cout << "Age : " << age << endl;

	return 0;
}

#include <iostream>
using namespace std;

int main()
{
    string name;

    cout << "Please enter your name \n";
    getline(cin, name); // Reading the full line as input
    // cin >> name; // Wrong approach, try giving a full name
    cout << "Hi " << name << ", \n"
         << "Welcome to GfG";

    return 0;
}

