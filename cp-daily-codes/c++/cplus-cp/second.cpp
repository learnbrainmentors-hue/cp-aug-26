#include <iostream>
#include <set>
using namespace std;
int main()
{
    // Immutable
    int first = 10;
    int second = first;
    // second = second + 5;
    cout << first << " " << &first << " " << second + 5 << " " << second << endl;

    // Mutable
    // Derived Type
    int x = 10;
    int *y = &x;
    cout << y << " " << *y << endl;
    *y = *y + 20;
    cout << y << " " << *y << " " << x << " " << &y << endl;

    // Array - collection of similar elements
    int arr[5];
    cout << "Array  index " << arr[1] << endl;
    int w[5] = {10, 20, 30, 40, 50};
    cout << "Array  index " << w[1] << endl;

    // STL
    cout << "******************* STL *****************" << endl;
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    cout << v1.size() << endl;

    set<int> s1 = {10, 20, 30, 40, 50, 10, 20, 30};
    cout << s1.size() << endl;
    return 0;
}