#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
string generatePassword(int length) {
    const std::string characters = 
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789"
        "!@#$%^&*()";

    string password;
    int charactersSize = characters.size();

    // Initialize random seed
    srand(time(0));

    for (int i = 0; i < length; ++i) {
        int index = rand() % charactersSize;
        password += characters[index];
    }

    return password;
}

int main() {
    int length;

    cout << "Enter the desired length for the password: ";
    cin >> length;

    string password = generatePassword(length);
    cout << "Generated password: " << password << endl;

    return 0;
}
