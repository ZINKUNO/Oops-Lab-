#include <iostream>
using namespace std;

int main() {
    
    int x = 42;
    int *ptr = &x;  

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value using pointer: " << *ptr << endl;
    cout << "Address stored in pointer: " << ptr << endl;

    int arr1[] = {10, 20, 30};
    int *ptr1 = arr1;

    cout << *ptr1 << endl;   // 10
    ptr1++;
    cout << *ptr1 << endl;   // 20
    cout<<*ptr1++;
    cout << *ptr1 << endl;   // 30

    int y = 100;
    int *p2 = &y;
    int **pp = &p2;

    cout << "Value of y: " << **pp << endl;
    cout << "Address of y: " << *pp << endl;
    cout << "Address of p2: " << pp << endl;
}