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

