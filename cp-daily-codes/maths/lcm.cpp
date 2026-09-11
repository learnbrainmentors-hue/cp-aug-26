#include <iostream>
using namespace std;
int gcd(int a, int b)
{

    if (a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    while (1)
    {
        int rem = a % b;
        a = b;
        b = rem;
        if (rem == 0)
        {
            return a;
            // cout << a << endl;
            // break;
        }
    }
    return 0;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int lcm = (a * b) / gcd(a, b);
    cout << lcm << endl;
}

/*
// Brute Force
int main()
{
    int a, b;
    cin >> a >> b;
    int gt = a > b ? a : b;
    while (1)
    {
        if (gt % a == 0 && gt % b == 0)
        {
            cout << gt << endl;
            break;
        }
        gt++;
    }
    return 0;
}
    */
