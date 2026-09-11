#include <iostream>
using namespace std;
void table(int n, int range)
{
    if (range == 0)
    {
        return;
    }
    table(n, range - 1);
    cout << n << " * " << range << " = " << n * range << endl;
}
string table2(int n, int range)
{
    if (range == 0)
    {
        return "";
    }
    string str = table2(n, range - 1);
    str = str + to_string(n) + " * " + to_string(range) + " = " + to_string(n * range) + "\n";
    return str;
}
int main()
{
    // table(5, 10);
    string s = table2(7, 10);
    cout << s;
    return 0;
}