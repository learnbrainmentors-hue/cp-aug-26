#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int width = n * 2 - 1;
    int range = 5;
    for (int row = 1; row <= n; row++)
    {
        for (int i = 1; i <= range; i++)
        {
            for (int col = 1; col <= width; col++)
            {
                if (col == n - row + 1 || col == n + row - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}