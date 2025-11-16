#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ofstream s1("Source1.txt");
    ofstream s2("Source2.txt");

    s1 << 10 << " " << 30 << " " << 50 << " ";
    s1.close();

    s2 << 20 << " " << 40 << " " << 60 << " ";
    s2.close();

    ifstream file1("Source1.txt");
    ifstream file2("Source2.txt");
    ofstream target("Target.txt");

    if (!file1 || !file2) {
        cerr << "Error: Could not open input files." << endl;
        return 1;
    }

    vector<int> numbers;
    int num;

    while (file1 >> num) {
        numbers.push_back(num);
    }

    while (file2 >> num) {
        numbers.push_back(num);
    }

    sort(numbers.begin(), numbers.end());

    for (int x : numbers) {
        target << x << " ";
    }

    cout << "Files created and merged sorted list written to Target.txt successfully!" << endl;

    file1.close();
    file2.close();
    target.close();

    return 0;
}
