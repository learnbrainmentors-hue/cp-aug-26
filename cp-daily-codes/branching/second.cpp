#include <iostream>
using namespace std;
int show(int x)
{
    if (x <= 0)
    {
        return 1;
    }
    int first = show(x - 1);
    int second = show(x - 2);
    return first + second;
}
int main()
{
    // return 0;
    int r = show(3);
    cout << r << endl;
}