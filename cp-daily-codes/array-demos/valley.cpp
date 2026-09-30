#include <iostream>
using namespace std;
int main()
{
    return 0;
    int t; // number of testcases;
    cin >> t;

    while (t--)
    {
        int n; // size of array
        cin >> n;
        int arr[n]; // mountain array
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int countValley = 0;
        int left = 0;
        while (left < n)
        {
            int right = left;
            while (right + 1 < n && arr[left] == arr[right + 1])
            {
                right++;
            }
            // check left and right
            bool leftBadaValue = left == 0 || arr[left - 1] > arr[left];
            bool rightBadaValue = right == n - 1 || arr[right + 1] > arr[right];
            if (leftBadaValue && rightBadaValue)
            {
                countValley++;
            }
            left = right + 1;
        }
        cout << (countValley == 1 ? "Yes" : "No") << endl;
    }
}