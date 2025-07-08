#include <iostream>
using namespace std;

string user_input;

string getUserCalculation() {
    string input;
    cout << "Please enter your calculation.\n     > ";
    getline(cin, input);
    return input;
}

int main() {

    user_input = getUserCalculation();
    cout << "Your requested calculation is " << user_input;

    return 0;
}