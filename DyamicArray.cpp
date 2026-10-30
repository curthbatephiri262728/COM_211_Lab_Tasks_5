#include <iostream>
#include <string>
using namespace std;

int main() {
        int* numPointer = new int;
    string* textPointer = new string;
 
    // Get values from the user
    cout << "Enter an integer: ";
    cin >> *numPointer;
    cin.ignore();  // clearing the newline left by cin
 
    cout << "Enter a string: ";
    getline(cin, *textPointer);
 
    // Output values
    cout << "The integer is: " << *numPointer << endl;
    cout << "The string is: " << *textPointer << endl;
 
    // Free memory
    delete numPointer;
    delete textPointer;
 
    return 0;
}