#include <iostream>
using namespace std;

int main() {
    int myvariable = 42;
    int* mypointer;
    mypointer = &myvariable;

    cout << mypointer << endl << &myvariable << endl;
    cout << *mypointer << endl;

    *mypointer = 23;
    cout << "Now myvariable has changed to the value " << myvariable << endl;

    return 0;
}