#include <iostream>
using namespace std;
int main()
{
    string a = "abcdabc";
    int hash[26] = {}; // 26 chars
    // cout << a[0] << endl;
    // cout << (int)a[0] << endl;
    // cout << a[1] - a[0] << endl;
    for (int i = 0; i < a.size(); i++)
    {
        int index = a[i] - 'a';
        hash[index] = hash[index] + 1;
    }

    for (int i = 0; i < 26; i++)
    {
        int e = 'a' + i;
        cout << (char)e << " " << hash[i] << endl;
    }
    // Ascii value
    // A - 65
    // a - 97
    return 0;
}