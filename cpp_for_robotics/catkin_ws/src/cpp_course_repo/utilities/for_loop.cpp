#include <iostream>
#include <list>
using namespace std;

int main() {
  
  // string sentence = "Hello";
  list<string> spells({"Lumos","Alohomora","Wingardium Leviosa","Crucio","Expecto Patronum"});

  // for ( int i=0; i < 5; i+=1 ) {
  //   // cout << i << endl;
  //   cout << sentence[i] << endl;
  // }

  for (string spell : spells) {
    cout << spell << ", ";
  }
  cout << endl;

  return 0;
}