#include <bits/stdc++.h>
using namespace std;

//    1. Friend function example with operator+
class Complex
{
    float real, imag;

public:
    Complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }

    void show() const
    {
        cout << real << " + " << imag << "i" << endl;
    }

    /* ---- friend that overloads + to add two Complex ---- */
    friend Complex operator+(const Complex &a, const Complex &b);
};

// Friend function implementation
Complex operator+(const Complex &a, const Complex &b)
{
    return Complex(a.real + b.real, a.imag + b.imag);
}

/* ------------- single inheritance ------------- */
class A
{
public:
    void showA() { 
        cout << "A "; }
};
class B : public A
{
public:
    void showB() { 
        cout << "B "; }
};

/* ------------- multilevel inheritance ------------- */
class C : public B
{
public:
    void showC() { 
        cout << "C "; }
};

/* ------------- multiple inheritance ------------- */
class X
{
public:
    void showX() { 
        cout << "X "; }
};
class Y
{
public:
    void showY() { 
        cout << "Y "; }
};
class Z : public X, public Y
{
public:
    void showZ() { cout << "Z "; }
};

/* ------------- hierarchical inheritance ------------- */
class D
{
public:
    void showD() { cout << "D "; }
};
class E : public D
{
public:
    void showE() { cout << "E "; }
};
class F : public D
{
public:
    void showF() { cout << "F "; }
};

/* ------------- hybrid inheritance (multiple + hierarchical) ------------- */
class M
{
public:
    void showM() { cout << "M "; }
};
class N : public M
{
public:
    void showN() { cout << "N "; }
};
class P : public M
{
public:
    void showP() { cout << "P "; }
};
class Q : public N, public P
{
public:
    void showQ() { cout << "Q "; }
};


int main()
{
    cout << "=== Friend function & operator+ ===\n";
    Complex c1(2.5, 3.5), c2(1.5, 2.5), c3;
    c3 = c1 + c2; // friend operator+
    c1.show();    // 2.5 + 3.5i
    c2.show();    // 1.5 + 2.5i
    c3.show();    // 4.0 + 6.0i

    cout << "\n=== Single inheritance (B inherits A) ===\n";
    B b;
    b.showA();
    b.showB();
    cout << endl;

    cout << "\n=== Multilevel inheritance (C inherits B inherits A) ===\n";
    C c;
    c.showA();
    c.showB();
    c.showC();
    cout << endl;

    cout << "\n=== Multiple inheritance (Z inherits X and Y) ===\n";
    Z z;
    z.showX();
    z.showY();
    z.showZ();
    cout << endl;

    cout << "\n=== Hierarchical inheritance (E,F inherit D separately) ===\n";
    E e;
    F f;
    e.showD();
    e.showE();
    cout << "  ";
    f.showD();
    f.showF();
    cout << endl;

    cout << "\n=== Hybrid inheritance (Q inherits N,P which both inherit M) ===\n";
    Q q;
    q.showN();
    q.showP();
    q.showQ();
    cout << endl;

    return 0;
}
