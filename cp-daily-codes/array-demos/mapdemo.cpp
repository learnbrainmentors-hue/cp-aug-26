// Hashing
// 1. Using Array
// 2. Using Map (Pre Build DS)
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> map;
    // map[key] = value
    map["delhi"] = 30;
    map["mumbai"] = 20;
    for (auto m : map)
    {
        cout << m.first << " " << m.second << endl;
    }
    // cout << map.count("delhi") << endl;
    // cout << map.empty();
    // map.erase("delhi");
    if (map.find("delhi") != map.end())
    {
        cout << "Found...";
    }
    else
    {
        cout << " Not Found...";
    }
    return 0;
}
