#include <iostream>
using namespace std;
void printAllSubSeq(string str, string result)
{
    if (str.length() == 0)
    {
        cout << result << " ";
        return;
    }
    // Include it
    printAllSubSeq(str.substr(1), result + str[0]);
    // Not Include it
    printAllSubSeq(str.substr(1), result);
}
int main()
{
    printAllSubSeq("amit", "");
    cout << endl;
    return 0;
}