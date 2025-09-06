//count count vowels and const 
//str lenght
//wap display word with start ewith 'a'
// C++ single file with 3 void functions
#include <bits/stdc++.h>
using namespace std;
void countVowelsAndConsonants() {
    string str;
    int vowels = 0, consonants = 0;
    cout << "Enter a string to count vowels and consonants: ";
    getline(cin, str);

    for (char ch : str) {
        char c = tolower(ch);
        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl
         << "Consonants: " << consonants << endl
         << "String length: " << str.length() << endl;
}

void displayWordsStartingWithA() {
    string str;
    cout << "Enter a string to find word starting with 'a' or 'A': ";
    getline(cin, str);
    cout << "Words starting with 'a' or 'A':" << endl;
    str += ' ';
    int start = 0;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == ' ') {
            int len = i - start;
            if (len > 0) {
                string word = str.substr(start, len);
                if (word[0] == 'a' || word[0] == 'A')
                    cout << word << endl;
            }
            start = i + 1;
        }
    }
}

void useStrLength() {
    string str;
    cout << "Enter a string to get its length: ";
    getline(cin, str);
    cout << "Length of string: " << str.length() << endl;
}

int main() {
    countVowelsAndConsonants();
    cout << endl;
    displayWordsStartingWithA();
    cout <<endl;
    useStrLength();
}