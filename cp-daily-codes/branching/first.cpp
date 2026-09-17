#include <iostream>
using namespace std;
void show(int x)
{
    if (x <= 0)
    {
        return;
    }
    cout << "Pre Call (x-1) " << x << endl;
    show(x - 1);
    cout << "BW Call (x-1) and (x-2) " << x << endl;
    show(x - 2);
    cout << "Post Call (x-2) " << x << endl;
    show(x - 3);
    cout << "Post Call (x-3) " << x << endl;
}
int main()
{
    show(15);
}