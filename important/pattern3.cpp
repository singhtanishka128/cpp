/*Input: n = 5
Output:

*****
 ****
  ***
   **
    *
*/
#include<iostream>
using namespace std;

int main()
{
    int i = 1, n;
    cin >> n;

    while (i <= n)
    {
        int j = 1;

        // Print spaces
        while (j <= n - i)
        {
            cout << ' ';
            j++;
        }

        // Print stars
        while (j <= n)
        {
            cout << '*';
            j++;
        }

        cout << '\n';
        i++;
    }
    return 0;
}