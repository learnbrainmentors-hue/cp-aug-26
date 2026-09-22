#include <iostream>
using namespace std;
vector<string> printAllPos2(int start, int end)
{
    if (start == end)
    {
        return {""}; // vector with size 1
    }
    if (start > end)
    {
        return {}; // vector with size 0
    }
    vector<string> ans;
    for (int dice = 1; dice <= 6; dice++)
    {
        vector<string> v = printAllPos2(start + dice, end);
        for (string val : v)
        {
            ans.push_back(to_string(dice) + val);
        }
    }
    return ans;
}
void printAllPos(int start, int end, string result)
{
    if (start == end)
    {
        cout << result << " ";
        return;
    }
    if (start > end)
    {
        return;
    }
    for (int dice = 1; dice <= 6; dice++)
    {
        printAllPos(start + dice, end, result + to_string(dice));
    }
    // printAllPos(start + 1, end, result + "1");
    // printAllPos(start + 2, end, result + "2");
    // printAllPos(start + 3, end, result + "3");
    // printAllPos(start + 4, end, result + "4");
    // printAllPos(start + 5, end, result + "5");
    // printAllPos(start + 6, end, result + "6");
}
int main()
{
    // printAllPos(0, 10, "");
    // cout << endl;
    vector<string> v = printAllPos2(0, 10);
    for (string val : v)
    {
        cout << val << " ";
    }
    cout << endl;
}