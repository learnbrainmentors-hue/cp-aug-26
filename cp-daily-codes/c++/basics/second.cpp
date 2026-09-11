#include <iostream>
using namespace std;
int main()
{
    short x = 10000;
    int a = 10;
    int b = a;
    long c = 888888;
    long long d = 5454;
    long int e = 88888833;
    double f = d;
    float t = 90.20;
    char att = 'P';
    bool h = true;

    cout << x << endl;
    cout << sizeof(x) << endl;
    cout << sizeof(a) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << " " << d << endl;
    cout << sizeof(e) << endl;
    cout << sizeof(t) << endl;
    cout << sizeof(f) << " " << f << endl;
    cout << sizeof(att) << " " << (char)(att + 2) << endl;
    cout << sizeof(h) << " " << h + 2 << endl;
    cout << &a;
    cout << a << " " << b << endl;
}