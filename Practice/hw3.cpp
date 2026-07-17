#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if (x < 0)
    {
        // cout << x;
        cout<< (x *= -1);
    }
    else
        cout << x;
}