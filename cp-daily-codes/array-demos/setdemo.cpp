#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;
int main()
{
    // set<int> s;
    unordered_set<int> s;
    s.insert(10);
    s.insert(10);
    s.insert(20);
    s.insert(20);
    s.insert(1);
    for (auto i : s)
    {
        cout << i << endl;
    }
}