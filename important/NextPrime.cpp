#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    n++;
    while (true)
    {
        int i;
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
                break;
        }
        if (i == n)
        {
            cout << n << endl;
            break;
        }
        n++;
    }

    return 0;
}