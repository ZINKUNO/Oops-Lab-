#include <iostream>
#include <vector>
using namespace std;

void diagonalProduct(vector<vector<int>>& arr) {
    if(arr.empty() || arr.size() != arr[0].size()) {
        cout << "Array is not square! Cannot get diagonal elements." << endl;
        return;
    }
    int product = 1;
    cout << "Diagonal elements: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i][i] << " ";
        product *= arr[i][i];
    }
    cout << "\nProduct of diagonal elements: " << product << endl;
}
void calculateAverage(vector<vector<int>>& arr) {
    if(arr.empty()) {
        cout << "Array is empty!" << endl;
        return;
    }
    
    int sum = 0, count = 0;
    for(int i = 0; i < arr.size(); i++) {
        for(int j=0;j<arr[i].size(); j++) {
            sum += arr[i][j];
            count++;
        }
    }
    double average = (float)(sum) / count;
    cout << "Average of array elements: " << average << endl;
}

void findLargestElement(vector<vector<int>>& arr) {
    if(arr.empty()) {
        cout << "Array is empty!" << endl;
        return;
    }
    int largest = arr[0][0];
    for(int i=0;i<arr.size(); i++) {
        for(int j=0;j<arr[i].size(); j++) {
            if(arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }
    cout << "Largest element in array: " << largest << endl;
}

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    vector<vector<int>> array(rows, vector<int>(cols));
    cout << "Enter array elements:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }
    cout << "\nEntered array:" << endl;
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cout <<array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    
    diagonalProduct(array);
    calculateAverage(array);
    findLargestElement(array);
    
    return 0;
}