#include <iostream>
using namespace std;
int main()
{
    // int arr[5];
    // int arr[5] = {};
    // int arr[5] = {10, 20, 30, 40, 50};
    const int SIZE = 30;
    // SIZE++;
    int t[SIZE] = {};
    for (int i = 0; i < SIZE; i++)
    {
        cout << t[i];
    }
    int a[10];
    int arr[] = {10, 20, 30, 40, 50}; // Fixed Size
    // arr[5] = 1000;
    vector<int> v1(10); // Dynamic
    vector<int> v2 = {100, 200, 300, 40, 50};
    v2.push_back(888); // add at end (append)
    cout << v1.capacity() << endl;
    cout << v1.size() << endl;
    v1.push_back(10);
    v1.push_back(20);
    cout << v1.capacity() << endl;
    cout << v1.size() << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl;
    }
    // Traverse
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << endl;
    // }
    return 0;
}