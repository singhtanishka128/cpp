#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        cout << n*i << '\n';
    }
    return 0;
}