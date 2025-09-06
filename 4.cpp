#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int arr[n][n];
    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int primarySum = 0, secondarySum = 0;

    for (int i = 0; i < n; i++) {
        primarySum += arr[i][i];                // Primary diagonal
        secondarySum += arr[i][n - i - 1];      // Secondary diagonal
    }

    cout << "Sum of primary diagonal: " << primarySum << endl;
    cout << "Sum of secondary diagonal: " << secondarySum << endl;

    // If you want sum of both without double-counting the middle element (for odd n):
    int totalSum = primarySum + secondarySum;
    if (n % 2 != 0) {
        totalSum -= arr[n/2][n/2]; // middle element counted twice
    }
    cout << "Sum of both diagonals: " << totalSum << endl;

    return 0;
}
