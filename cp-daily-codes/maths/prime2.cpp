#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a;
    cin >> a; // range
    vector<bool> isPrime(a + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i * i <= a; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= a; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    // after this loop
    for (int i = 2; i <= a; i++)
    {
        if (isPrime[i])
        {
            cout << i << endl;
        }
    }
}