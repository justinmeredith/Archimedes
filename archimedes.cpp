#include <iostream>
#include <cctype>
using namespace std;

// -__VARIABLES__-
string user_input;

// -__FUNCTIONS__-

// Checks that only accepted characters are entered by the user
bool validateUserInput(string input_string) {
    bool validity = true;
    for (int i = 0; i < input_string.length(); i++) {
        if (isalpha(input_string[i])) {
            validity = false;
        }
    }

    return validity;
}

// Gets input from the user to use in the calculation
string getUserCalculation() {
    string input_string;
    bool valid_input = false;
    while (valid_input == false) {
        cout << "\nPlease enter your calculation.\n     > ";
        getline(cin, input_string);
        if (validateUserInput(input_string)) {
            valid_input = true;
        } else {
            cout << endl << "     **Error** Archimedes cannot process alphabetic characters or variables at this time." << endl;
        }
    }

    return input_string;
}

int main() {

    user_input = getUserCalculation();
    cout << "Your requested calculation is " << user_input;

    return 0;
}