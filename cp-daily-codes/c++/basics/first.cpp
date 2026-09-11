#include <iostream>
using namespace std;
// Entry point
int main()
{
    string name;
    cout << "Enter your name" << endl;
    // cin >> name;
    getline(cin, name);
    // cout is an object
    cout << "Hello C++ " << "My name is " << name << endl;
    return 0; // success exit (by default)
    // return 1 ; // fail exit
}