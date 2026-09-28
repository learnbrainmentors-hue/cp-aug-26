#include <iostream>

using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cutoff = arr[k - 1];
    int nextRoundCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= cutoff && arr[i] > 0)
        {
            nextRoundCount++;
        }
    }
    cout << nextRoundCount << endl;
    return 0;
}
