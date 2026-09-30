#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int left = 0;
    int right = n - 1;
    int serejaScore = 0;
    int dimaScore = 0;
    bool serejaTurn = true;
    while (left <= right)
    { // till we have cards
        int card;
        if (arr[left] > arr[right])
        {
            card = arr[left];
            left++;
        }
        else
        {
            card = arr[right];
            right--;
        }
        if (serejaTurn)
        {
            serejaScore = serejaScore + card;
        }
        else
        {
            dimaScore = dimaScore + card;
        }
        // turn change
        serejaTurn = !serejaTurn;
    }
    cout << serejaScore << " " << dimaScore << endl;
    return 0;
}