#include <iostream>

using namespace std;

void increment(int &number) {
    cout << "Thre address of number is: " << &number << endl;
    number++;
    cout << "Now the value of number is: " << number << endl;
}

int main() {
    int number = 42;
    cout << "The value of number is: " << number << " and the address is: " << &number << endl;
    increment(number);

    return 0;
}