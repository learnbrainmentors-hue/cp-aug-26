#include <iostream>
using namespace std;
int sod(int num)
{
    if (num == 0)
    {
        return 0;
    }
    int sum = sod(num / 10);
    int digit = num % 10;
    sum = sum + digit;
    return sum;
}
void sod(int num, int sum)
{ // base case
    if (num == 0)
    {
        cout << sum << endl;
        return;
    }
    int digit = num % 10;
    sum = sum + digit;
    sod(num / 10, sum);
}
int main()
{
    int n = 1234;
    // sod(n, 0);
    int r = sod(n);
    cout << r << endl;
    return 0;
}