#include <iostream>

using namespace std;

void squared_array(int myarray[]) {
    int* mypointer = myarray;

    for (int i=0; i<6; i++){
        *mypointer = myarray[i]*myarray[i];
        cout << *mypointer << endl;
        mypointer++;
    }

}

int main() {

    int myarray[] = {4,8,15,16,23,42};
    squared_array(myarray);

    return 0;
}