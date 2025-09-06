#include <iostream>
using namespace std;

// Function to calculate and display row-wise sum of a matrix
void rowSum(int **a, int r, int c) {
    cout << "\nRow-wise sum of first matrix:\n";
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            sum += a[i][j];
        }
        cout << "Row " << i + 1 << " sum = " << sum << endl;
    }
}

// Function to calculate and display sum of two matrices
void addMatrix(int **a, int **b, int r, int c) {
    cout << "\nSum of two matrices:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    // Dynamic allocation of 2D arrays
    int *a = new int[r];
    int *b = new int[r];
    for (int i = 0; i < r; i++) {
        a[i] = new int[c];
        b[i] = new int[c];
    }

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> b[i][j];
        }
    }

    // Row sum of first matrix
    rowSum(a, r, c);

    // Sum of two matrices
    addMatrix(a, b, r, c);

    // Free allocated memory
    for (int i = 0; i < r; i++) {
        delete[] a[i];
        delete[] b[i];
    }
    delete[] a;
    delete[] b;

    return 0;
}