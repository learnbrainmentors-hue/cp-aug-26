#include <iostream>
using namespace std;
int show(int x)
{
    return x * x;
}
int main()
{
    constexpr int MIN = 1000;
    // MIN = 2000;
    cout << "Enter the number";
    int m;
    cin >> m;
    const int MAX = show(m);
    // MAX = 2000;
    cout << MAX;
    return 0;
}