#include <iostream>
using namespace std;
int main()
{
    string t;
    string s;
    cin >> t >> s;
    if (t.length() != s.length())
    {
        cout << "NO" << endl;
        return 0;
    }
    int i = 0;
    int j = s.length() - 1;
    while (i < t.length())
    {
        if (t[i] != s[j])
        {
            cout << "NO" << endl;
            return 0;
        }
        i++;
        j--;
    }
    cout << "YES" << endl;
    return 0;
}