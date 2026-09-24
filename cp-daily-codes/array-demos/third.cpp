#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << len;
}