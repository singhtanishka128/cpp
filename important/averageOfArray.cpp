#include <iostream>
using namespace std;

// Function to calculate the average of array elements
double find_average(int arr[], int n) {
    int sum = 0; // Variable to store the sum of elements
    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Add each element to the sum
    }
    return (double)sum / n; // Return the average as a double value
}

int main() {
    int n;
    cin >> n; // Input the size of the array

    int arr[n]; // Declare an array of size n

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Output the average
    cout << find_average(arr, n);

    return 0;
}