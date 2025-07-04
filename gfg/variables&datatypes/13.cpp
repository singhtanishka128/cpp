#include <iostream>
using namespace std;
int main()
{   
    cout << "Prefixes in Integer Literals\n" ; 
	{
    	int a = 20 ;  //Decimal
    	int b = 0x1A; //Hexadecimal
    	int c = 016;  //Octal
    	int d = 0b11; //Binary
    	cout << a << "\n"
    	     << b << "\n"
    	     << c << "\n"
    	     << d << "\n";
	}

	return 0;
}


#include <iostream>
using namespace std;

int main() {

    	cout << "Suffixes in Integer Literals\n";
	    int a = 124;
	    unsigned b = 124u;
	    long int c = 124L;
	    long long int d = 124LL;
	    cout << a << "\n"
	         << b << "\n"
	         << c << "\n"
	         << d << "\n";

	return 0;
}


#include <iostream>
using namespace std;

int main()
{
	cout << "Floating Point Literals\n";
	{
	    float  a = 10.5f;
	    double b = 10.515;
	    float  c = 2.1e15f;
	    double d = 200.1e-60;
	    double f = 0x1A.1p2;
	    cout << a << "\n"
    	     << b << "\n"
    	     << c << "\n"
    	     << d << "\n"
    	     << f << "\n"; 
	}
	return 0;
}


#include <iostream>
using namespace std;

int main()
{
cout << "Character and String Literals\n";
	{
	    char c = 'g';
	    const char *s1 = "gfg";
	    string s2 = "courses";
	    cout << c  << "\n"
	         << s1 << "\n"
	         << s2 << "\n";
	}
	return 0;
}


#include <iostream>
using namespace std;

int main()
{
	const bool isTrue = true;
	const bool isFalse = false;

	cout << "isTrue? "
		<< isTrue << "\n";
	cout << "isFalse? "
		<< isFalse << "\n";

	return 0;
}


