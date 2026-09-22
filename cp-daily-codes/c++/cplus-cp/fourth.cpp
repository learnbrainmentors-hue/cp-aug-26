#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int y = 2;
    // Arithmetic Operator
    cout << x + y << endl;
    cout << x - y << endl;
    cout << x * y << endl;
    cout << x / y << endl;
    cout << x % y << endl;
    cout << 2 + (5 - 6) * 4 << endl;

    // Relational Operator
    cout << (x > y) << endl;
    cout << (x < y) << endl;
    cout << (x >= y) << endl;
    cout << (x <= y) << endl;
    cout << (x == y) << endl;
    cout << (x != y) << endl;

    // Unary Operator ++ --
    int a = 10;
    int e = ++a; // a = a + 1 Prefix
    int f = a++; // a = a + 1 Postfix
    cout << a << e << f << endl;
    int w1 = 10;
    int w2 = 20;
    int total = ++w1 + w2++;
    cout << total << " " << w1 << " " << w2 << endl;

    int h1 = 10;
    int h2 = 20;
    int h3 = 5;
    int r = h1++ * --h2 + h3++ + ++h3;
    // cout << h1++ * --h2 + h3++ << endl;
    //  cout << h3++ + ++h3 << endl;
    //  cout << h3 << endl;
    cout << " RESULT " << r << " " << h1 << " " << h2 << " " << h3 << endl;

    // Logical Operator
    cout
        << (10 > 2 && 20 > 5) << endl;
    cout << (10 > 2 || 20 > 500) << endl;
    cout << !(10 > 20) << endl;
    return 0;
}