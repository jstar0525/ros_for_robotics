#include <iostream>
using namespace std;

int myfunction(int a=5, int b=1) {
    int sum = a+b;
    return sum;
}

int main() {
    int result = myfunction();
    cout << "Result: " << result << endl;

    return 0;
}