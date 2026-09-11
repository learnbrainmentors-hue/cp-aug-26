#include <iostream>
#include <set>
using namespace std;

int main()
{
    string username;
    cin >> username;
    set<char> nameset(username.begin(), username.end());
    int len = nameset.size();
    if (len % 2 != 0)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }
}