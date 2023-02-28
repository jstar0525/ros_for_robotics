#include <iostream>
#include <list>
using namespace std;

list<int> myfunction(int a=5, int b=1){
    int sum = a+b;
    list<int> list_result({a,b,sum});
    return list_result;
}

int main() {
    list<int> results = myfunction();
    for (int number : results) {
        cout << number << ", ";
    }
    cout << endl;

    return 0;
}