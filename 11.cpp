#include <iostream>
#include <cstring>  // for strlen
using namespace std;

int main() {
    char arr[3][5] = {
        "Cat",   
        "Dog",
        "Bat"
    };

    cout << "Using sizeof ";
    cout << "Total size of arr: " << sizeof(arr) << " bytes"; 
    cout << "Size of one row: " << sizeof(arr[0]) << " bytes"; 

    cout << "Using strlen (row by row) "<<endl;
    for (int i = 0; i < 3; i++) {
        cout << "Row " << i << " string: " << arr[i]
             << " | strlen: " << strlen(arr[i]) << endl;
    }

    cout << "Using std::string (safer) "<<endl;
    string sArr[3] = {"Cat", "Dog", "Bat"};
    for (int i = 0; i < 3; i++) {
        cout << "Row " << i << " string: " << sArr[i]
             << " | length(): " << sArr[i].length() << endl;
    }

    return 0;
}
