#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            cout << "Not Prime ";
            return 0;
        }
    }
    cout << "Prime Number" << endl;
    return 0;
}