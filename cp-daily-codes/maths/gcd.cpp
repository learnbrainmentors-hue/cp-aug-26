#include <iostream>
using namespace std;

// 2nd Approach Elucid
int main()
{
    int a, b;
    cin >> a >> b;
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
            cout << a << endl;
            break;
        }
    }
    return 0;
}
/**
// 1st Brute Force
int main()
{
    // a = 18 b = 12
    int a, b;
    cin >> a >> b;
    int div = a < b ? a : b;
    while (1)
    {
        if (a % div == 0 && b % div == 0)
        {
            cout << div << endl;
            break;
            // return 0;
        }
        div--;
    }
    return 0;
}
    */