#include <iostream>
using namespace std;

int main()
{
    int x = 5;

    cout << (x += 2) << endl;
    cout << (x -= 2) << endl;
    cout << (x *= 2) << endl;
    cout << (x /= 2) << endl;
    cout << (x %= 2) << endl;

    return 0;
}