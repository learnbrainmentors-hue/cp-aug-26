#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter the Age" << endl;
    cin >> age;
    if (age >= 18)
    {
        cout << "U can apply for DL" << endl;
    }
    else
    {
        cout << "U r minor u can't apply for DL " << endl;
    }
}