#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 3 numbers";
    cin >> a >> b >> c;
    // Nested if else
    if (a > b)
    {
        if (a > c)
        {
            cout << "A is Greater";
        }
        else
        {
            cout << " C is Greater";
        }
    }
    else if (b > c)
    {
        cout << " B is Greater";
    }
    else
    {
        cout << " C is Greater";
    }
    // Multiple if else
    /**
     if (a > b && a > c)
     {
         cout << "A is Greater";
     }
     else if (b > a && b > c)
     {
         cout << "B is Greater";
     }
     else
     {
         cout << " C is Greater";
     }*/
}