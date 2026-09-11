#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age";
    cin >> age;
    // Nested if else
    if (age >= 20)
    {
        if (age <= 30)
        {
            cout << "Young Mature Age";
        }
        else
        {
            cout << "Young Age";
        }
    }
    else
    {
        cout << " Teen Age";
    }
    // multiple if else
    if (age >= 20)
    {
        cout << " U can apply for Visa";
    }
    else if (age < 20 && age >= 18)
    {
        cout << " u can apply for DL";
    }
    else
    {
        cout << " Not Apply";
    }
    // simple if else
    if (age >= 18)
    {
        cout << "U can vote";
    }
    else
    {
        cout << "U Can't vote";
    }
}