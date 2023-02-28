#include <iostream>
using namespace std;

string g_sentence;

void myfunction() {
    g_sentence = "Global variable";
}

int main() {
    myfunction();
    cout << g_sentence << endl;

    return 0;
}