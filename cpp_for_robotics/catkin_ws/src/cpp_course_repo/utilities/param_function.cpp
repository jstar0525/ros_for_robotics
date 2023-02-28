#include <iostream>
using namespace std;

// void myfunction(int a, int b) {
//     int sum = a+b;
//     cout << "Result: " << sum << endl;
// }

void myfunction(int a=5, int b=1) {
    int sum = a+b;
    cout << "Result: " << sum << endl;
}

int main() {
    myfunction();
    myfunction(4,3);

    return 0;
}