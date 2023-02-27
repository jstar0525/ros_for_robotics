#include <iostream>
using namespace std;

int main()
{
    string movie;
    cout << "What's the most boring movie you have ever seen?";
    getline(cin, movie);

    if (movie == "Lord of the Rings"){
        cout << "I will never speak to you again. Goodbye. \n";
    } else if (movie == "Prostdata, I love you" || movie == "Baywatch"){
        cout << "I think we might become friends! :)";
    } else {
        cout << "I honestly don't know if I can trust you";
    }

    return 0;
}