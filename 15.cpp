#include <iostream>
#include <string>
using namespace std;

template <class T>
int linearSearch(T arr[], int n, T key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }

    throw "Element not found in the array!";
}

int main() {
    try {
        int arr[] = {10, 20, 30, 40, 50};
        int size = 5;
        int key;
        
        cout << "Enter element to search: ";
        cin >> key;

        int index = linearSearch(arr, size, key);
        cout << "Element found at index: " << index << endl;
    }
    catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }

    cout << "Program continues normally..." << endl;
    return 0;
}
