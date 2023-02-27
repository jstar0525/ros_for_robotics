#include <iostream>
using namespace std;

int main() {  
  int counter = 0;
  while (counter < 5) {
    counter += 1;
    cout << "Count: " << counter << endl; 
  }
  cout << " Got out of the while loop!" << endl;

  return 0;
}