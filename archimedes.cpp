#include <iostream>
#include <cctype>
#include <vector>
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

// Turns the input string into a vector
vector<string> tokenizeStringAsVector(string input_string) {
    vector<string> tokenized_string;
    string creating_element;
    for (int i = 0; i < input_string.length(); i++) {
        if (input_string[i] == ' ') {
            tokenized_string.push_back(creating_element);
            creating_element = "";
        } else if (i == (input_string.length() - 1)) {
            creating_element += input_string[i];
            tokenized_string.push_back(creating_element);
        } else {
            creating_element += input_string[i];
        }
    }

    return tokenized_string;
}

// Performs operations on the user's input in the order of PEMDAS
// This isn't actually going to be a 'void' function, I just changed it from 'int' to 'void' to make
// VS Code stop giving me an error o-O
void performOperations(string input_string) {
    // placeholder
}

// Adds two numbers
int archAdd(int num1, int num2) {
    return num1 + num2;
}

// Subtracts num2 from num1
int archSubtract(int num1, int num2) {
    return num1 - num2;
}

// Multiplies two numbers
int archMultiply(int num1, int num2) {
    return num1 * num2;
}

// Divides num1 by num2
int archDivide(int num1, int num2) {
    return num1 / num2;
}

// -__MAIN LOOP__-
int main() {

    user_input = getUserCalculation();
    cout << "Your requested calculation is " << user_input << endl;

    vector<string> conversion_test = tokenizeStringAsVector(user_input);

    cout << "The tokens in your requested calculation are: " << endl;

    for (int i = 0; i < conversion_test.size(); i++) {
        cout << "->" << conversion_test[i] << endl;
    }

    return 0;
}