#include <iostream>
#include <string>
using namespace std;

string user_input;

int main() {
    cout << "Please enter your calculation.\n     > ";
    getline(cin, user_input);
    cout << "Your requested calculation is " << user_input;
    return 0;
}