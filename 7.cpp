#include<iostream>
using namespace std;

// Function to input marks for a class
void inputMarks(int arr[], int size, int classNum) {
    cout << "\nEnter marks for Class " << classNum << " (" << size << " students):" << endl;
    for(int i = 0; i < size; i++) {
        cout << "Student " << i+1 << ": ";
        cin >> arr[i];
    }
}

// Function to find maximum marks in a class
int findMaxMarks(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

// Function to display results
void displayResults(int max1, int max2, int max3, int overallMax) {
    cout << "\nMaximum marks in Class 1: " << max1 << endl;
    cout << "Maximum marks in Class 2: " << max2 << endl;
    cout << "Maximum marks in Class 3: " << max3 << endl;
    cout << "Overall maximum marks: " << overallMax << endl;
}

int main() {
    // Declaring arrays for 3 classes with different students
    int class1[5], class2[3], class3[7];
    
    // Input marks for each class
    inputMarks(class1, 5, 1);
    inputMarks(class2, 3, 2);
    inputMarks(class3, 7, 3);
    
    // Finding maximum in each class
    int max1 = findMaxMarks(class1, 5);
    int max2 = findMaxMarks(class2, 3);
    int max3 = findMaxMarks(class3, 7);
    
    // Finding overall maximum
    int overallMax = max1;
    if(max2 > overallMax) overallMax = max2;
    if(max3 > overallMax) overallMax = max3;
    
    // Display results
    displayResults(max1, max2, max3, overallMax);
    
    return 0;
}