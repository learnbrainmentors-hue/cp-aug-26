#include <iostream>
using namespace std;
int main()
{
    int e = 10;
    int t = ++e; // e = e + 1 Prefix
    t = e++;     // e = e + 1 Postfix

    // question
    int m = 5;
    int a = ++m;
    int b = m++;
    int k = a + b;
    cout << " K is " << k << " M is " << m << endl;
    int h = 10;
    cout << ((++h >= 11) || (++h >= 12)) << endl;
    cout << "H is " << h << endl;
    cout << t << " " << e << endl;
    cout << 8 % 2 << endl;
    cout << (8 > 2) << endl;
    cout << (2 > 5 || 5 > 2) << endl;

    return 0;
}