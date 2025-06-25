#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n; 
    if(n%2==0)
    {
        cout << "Opponent Won";
    }
    else
    {
        cout << "You Won";
    }
    return 0;
    
}

#include<iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a>=b and a>=c)
    {
        cout << a;
    }
    else if(b>=a and b>=c)
    {
        cout << b;
    }
    else
    {
        cout<<c;
    }
    return 0;
}

#include<iostream>

using namespace std;

int main()
{
    int year;
    cin >> year;
    if(year % 4 == 0 and year % 100 != 0)
    {
        cout << "Leap Year";
    }
    else if(year % 400 == 0)
    {
        cout << "Leap Year";
    }
    else
    {
        cout << "Not a Leap Year";
    }
    return 0;
}

#include<iostream>

using namespace std;

int main()
{
    int op, x, y;
    cin >> op >> x >> y;
    if(op==1)
    {
        cout << x + y;
    }
    else if(op==2)
    {
        cout << x - y;
    }
    else if(op==3)
    {
        cout << x * y;
    }
    else
    {
        cout << "Invalid Input";
    }
    return 0;
}