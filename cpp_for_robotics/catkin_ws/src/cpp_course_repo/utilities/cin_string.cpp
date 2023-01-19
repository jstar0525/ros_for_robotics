#include <iostream>
using namespace std;

int main(){
    
    string name; 
    cout << "What's your name? ";        
    // cin >> name;    
    getline(cin, name);               
    cout << "Nice to meet you " << name << "!"; 
    
    return 0;}