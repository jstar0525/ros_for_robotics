#include <iostream>
using namespace std;

int main()
{
    string movie;
    cout << "What's the most boring movie you have ever seen?";
    getline(cin, movie);

    if (movie == "Lord of the Rings"){
        cout << "I will never speak to you again. Goodbye. \n";
    }

    return 0;
}