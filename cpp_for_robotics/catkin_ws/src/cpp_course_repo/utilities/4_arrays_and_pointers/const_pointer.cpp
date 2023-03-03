#include <iostream>

using namespace std;

int main() {
    int variable = 10;
    const int* pointer = &variable;
    *pointer = 20;

    // int* pointer;                   // non-constant pointer to non-constant integer
    // const int* pointer;             // non-constant pointer to constant integer
    // int* const pointer;             // constant pointer to non-constant integer
    // const int* const pointer;       // constant pointer to constant integer
    
    cout << "Value of variable: " << *pointer << endl;

    return 0;
}