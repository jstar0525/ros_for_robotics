#include <iostream>
using namespace std;

int myfunction(int a=5, int b=1) { 
    return a+b;
}

double myfunction(double a=5.1, double b=4.4) {
    return a+b;
}

int main() {
    int result1 = myfunction(2,3);
    cout << "Int result: " << result1 << "\n";

    double result2 = myfunction(2.1,3.3);
    cout << "Double result: " << result2 << "\n";

    return 0;
}