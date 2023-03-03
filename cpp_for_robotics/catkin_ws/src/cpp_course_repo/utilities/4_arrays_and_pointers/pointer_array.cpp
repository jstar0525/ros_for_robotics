#include <iostream>
using namespace std;

int main() {
    int myarray[6] = {4,8,15,16,23,42};
    int* mypointer;
    mypointer = myarray;

    cout << mypointer[2] << endl;

    *mypointer = 10;

    mypointer++;
    *mypointer = 20;

    mypointer = &myarray[2];
    *mypointer = 30;

    mypointer = myarray + 3;
    *mypointer = 40;

    mypointer = myarray;
    *(mypointer + 4) = 50;

    for (auto items : myarray) {
    cout << items << ",";
    }
    cout << endl;

    return 0;
}