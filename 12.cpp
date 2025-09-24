#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    float marks;
public:
    void read()
    {
        cout << "Enter roll  : ";  cin >> roll;
        cout << "Enter name  : ";  cin.ignore(); getline(cin, name);
        cout << "Enter marks : ";  cin >> marks;
    }
    void print() const
    {
        cout << "\n----- Student Details -----\n"
             << "Roll  : " << roll
             << "\nName  : " << name
             << "\nMarks : " << marks << "\n\n";
    }

    friend void congratulate(const Student& s);
};
void congratulate(const Student& s)
{
    cout << "Congrats " << s.name << "! You scored " << s.marks << " marks.\n\n";
}

class MyString
{
    string data;
public:
    MyString() = default;
    MyString(const string& s) : data(s) {}
    MyString operator+(const MyString& rhs) const
    {
        return MyString(data + rhs.data);
    }
    void display() const { cout << "Concatenated : " << data << "\n\n"; }
};


class Complex
{
    double r, i;
public:
    Complex(double real = 0, double imag = 0) : r(real), i(imag) {}
    Complex& operator++()   { ++r; ++i; return *this; }
    Complex& operator--()   { --r; --i; return *this; }      
    Complex  operator-(const Complex& rhs) const             
    {
        return Complex(r - rhs.r, i - rhs.i);
    }
    void print() const
    {
        cout << "(" << r << (i >= 0 ? " + " : " - ")
             << fabs(i) << "i)\n";
    }
};


void cyclicSwap(int& a, int& b, int& c)
{
    int t = a;
    a = b;
    b = c;
    c = t;
}

bool isPrime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}


inline int multiply(int a, int b) { return a * b; }
inline int cube(int x)            { return x * x * x; }


double area(double r)
{
    return 3.141592653589793 * r * r;
}
double area(double l, double b)              
{
    return l * b;
}
double area(double a, double b, double c)    
{
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}


int main()
{
    int choice;
    do
    {
        cout << "========== MENU ==========\n"
             << "1. Student class + friend\n"
             << "2. String concat (operator+)\n"
             << "3. Complex ++ / -- / -\n"
             << "4. Cyclic swap (3 ints)\n"
             << "5. Prime check\n"
             << "6. Inline multiply & cube\n"
             << "7. Area (circle/rect/tri) – overload\n"
             << "0. Exit\n"
             << "Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Student s;
            s.read();  s.print();  congratulate(s);
            break;
        }
        case 2:
        {
            MyString a("Hello, "), b("World!");
            MyString c = a + b;
            c.display();
            break;
        }
        case 3:
        {
            Complex x(7, 3), y(2, 5);
            cout << "x = "; x.print();
            cout << "y = "; y.print();
            ++x; --y;
            cout << "++x = "; x.print();
            cout << "--y = "; y.print();
            Complex z = x - y;
            cout << "x - y = "; z.print();
            break;
        }
        case 4:
        {
            int a, b, c;
            cout << "Enter 3 integers : ";
            cin  >> a >> b >> c;
            cout << "Before swap : a=" << a << " b=" << b << " c=" << c << '\n';
            cyclicSwap(a, b, c);
            cout << "After cyclic swap : a=" << a << " b=" << b << " c=" << c << "\n\n";
            break;
        }
        case 5:
        {
            int n;  cout << "Enter number : ";  cin >> n;
            cout << n << (isPrime(n) ? " is prime\n\n" : " is not prime\n\n");
            break;
        }
        case 6:
        {
            int a, b;
            cout << "Enter two ints : ";  cin >> a >> b;
            cout << "Multiply = " << multiply(a, b) << '\n';
            cout << "Cube of " << a << " = " << cube(a) << "\n\n";
            break;
        }
        case 7:
        {
            int shape;
            cout << "1 Circle  2 Rectangle  3 Triangle : ";
            cin  >> shape;
            if (shape == 1)
            {
                double r;  cout << "Radius : ";  cin >> r;
                cout << "Area = " << area(r) << "\n\n";
            }
            else if (shape == 2)
            {
                double l, b;  cout << "Length Breadth : ";  cin >> l >> b;
                cout << "Area = " << area(l, b) << "\n\n";
            }
            else if (shape == 3)
            {
                double a, b, c;  cout << "3 sides : ";  cin >> a >> b >> c;
                cout << "Area = " << area(a, b, c) << "\n\n";
            }
            break;
        }
        case 0:
            cout << "Good-bye!\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}