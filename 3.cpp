//task 
// prime number in given range
//palidrome no or not 

#include <iostream>
using namespace std;

//  1. Print primes in range 
void printPrimes(int low, int high) {
    if (low > high) swap(low, high);

    cout << "Primes in [" << low << ", " << high << "]:\n";

    for (int i = low; i <= high; i++) {
        if (i < 2) continue;

        int count = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) count++;
        }

        if (count == 2) cout << i << ' ';
    }
    cout << endl;
}

// 2. Check if ONE number is a palindrome 
void checkPalindrome() {
    while (true) {
        int num;
        cout << "Enter a number to check: ";
        cin >> num;

        int original = num, reversed = 0;
        while (num > 0) {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }

        if (reversed == original)
            cout << original << " IS a palindrome.\n";
        else
            cout << original << " is NOT a palindrome.\n";

        cout << "Check another? (y/n): ";
        char again;
        cin >> again;
        if (again != 'y' && again != 'Y')
            break;
    }
}

// main with outer do–while menu 
int main()
{
    int choice;
    do
    {
        cout << "\n========== MENU ==========\n"
             << "1. List primes in a range\n"
             << "2. Check if a number is palindrome\n"
             << "0. Exit\n"
             << "Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                int low, high;
                cout << "Enter lower bound: "; cin >> low;
                cout << "Enter upper bound: "; cin >> high;
                printPrimes(low, high);
                break;

            case 2:
                checkPalindrome();
                break;

            case 0:
                cout << "Goodbye!\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}