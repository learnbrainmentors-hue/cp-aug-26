#include <iostream>
using namespace std;
void show(int num)
{
    // Base case or Termination Case
    if (num == 0)
    {
        return;
    }
    cout << "Hello " << num << endl; // Pre call
                                     // num--;
    // show(num--);
    show(--num);
    // show(num - 1);
    // show(num - 1); // num - 1 (small problem) + Belief show()
    // Stack Fall (Post call)
    cout << "Bye " << num << endl;
}
int main()
{
    show(5);
    return 0;
}