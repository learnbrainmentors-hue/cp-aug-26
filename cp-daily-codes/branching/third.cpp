#include <iostream>
using namespace std;

// vector<string> show(int x)
// {
//     if (x <= 0)
//     {
//         return {};
//     }
//     vector<string> v1 = show(x - 1);
//     v1.push_back(to_string(x));
//     vector<string> v2 = show(x - 2);
//     v2.push_back(); // v1 data

//     vector<string> v3 = show(x - 3);
//     v3.push_back(); // v1 + v2 data
//     return v3;
// }
int main()
{
    show(3);
}