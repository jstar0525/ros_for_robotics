#include <iostream>
using namespace std;

int main() {
    // int myarray[6];
    // int myarray[6] = {4,8,15,16,23,42};
    int myarray[] = {4,8,15,16,23,42};

    // cout << myarray[2] << endl;

    for (auto items : myarray) {
    cout << items << endl;
    }

    return 0;
}