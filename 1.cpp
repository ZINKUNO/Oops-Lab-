//task 
// even odd using even odd
//swap without third variable
//fabinachoo series
//quientent and remainder
//ascii value of character

#include <iostream>
using namespace std;

// 1. Even/Odd with bitwise 
bool isEven(int n) { 
    return !(n & 1); }

void checkEvenOdd()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << n << " is " << (isEven(n) ? "EVEN" : "ODD") << "\n\n";
}

// 2. Swap WITHOUT third variable 
void swapNo(int &a, int &b)
{
    a = a + b;   // step 1
    b = a - b;   // step 2   (b gets original a)
    a = a - b;   // step 3   (a gets original b)
}

void swap()
{
    int a, b;
    cout << "Enter two numbers to swap: ";
    cin >> a >> b;
    cout << "Before swap: a = " << a << ", b = " << b << '\n';
    swapNo(a, b);
    cout << "After  swap: a = " << a << ", b = " << b << "\n\n";
}

// 3. Fibonacci 
void fibonacci()
{
    int n;
    cout << "How many Fibonacci terms? ";
    cin >> n;
    if (n <= 0) { cout << "Nothing to do.\n\n"; return; }

    long long a = 0, b = 1;
    cout << "Fibonacci series: ";
    for (int i = 0; i < n; ++i)
    {
        cout << a << ' ';
        long long next = a + b;
        a = b;
        b = next;
    }
    cout << "\n\n";
}

// 4. Quotient & Remainder
void quotientRemainder()
{
    int dividend, divisor;
    cout << "Enter dividend & divisor: ";
    cin >> dividend >> divisor;
    if (divisor == 0)
    {
        cout << "Division by zero!\n\n";
        return;
    }
    cout << "Quotient  = " << dividend / divisor << '\n';
    cout << "Remainder = " << dividend % divisor << "\n\n";
}

// 5. ASCII value 
void asciiValue()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "ASCII value of '" << ch << "' = " << (int)ch<< "\n\n";
}

// MAIN MENU 
int main()
{
    int choice;
    do
    {
        cout << "========== Mini Lab ==========\n"
                "1) Even/Odd (bitwise)\n"
                "2) Swap two numbers (no temp)\n"
                "3) Fibonacci series\n"
                "4) Quotient & Remainder\n"
                "5) ASCII value of a char\n"
                "0) Exit\n"
                "Choose: ";
        cin >> choice;
        cout << '\n';

        switch (choice)
        {
            case 1: checkEvenOdd();      break;
            case 2: swap();          break;
            case 3: fibonacci();         break;
            case 4: quotientRemainder(); break;
            case 5: asciiValue();        break;
            case 0: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice, try again.\n\n";
        }
    } while (choice != 0);

    return 0;
}