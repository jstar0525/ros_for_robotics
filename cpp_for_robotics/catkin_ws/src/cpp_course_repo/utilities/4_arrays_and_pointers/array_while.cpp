#include <iostream>

using namespace std;

int main() {
    int myarray[4] = {9,99,999,9999};
    int* start = myarray;
    int* stop = myarray+4;
    int* currentpointer = start;

    while (currentpointer != stop) {
        ++(*currentpointer);
        cout << *currentpointer << endl;
        ++currentpointer;
    }

    return 0;
}