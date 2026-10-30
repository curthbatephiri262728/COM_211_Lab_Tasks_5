#include <iostream>
using namespace std;

int main() {
    int firstvalue;
    int secondvalue;

    int * pPointer = nullptr; //decleared a pointer and initialized it to nullptr

    pPointer = &firstvalue; //assign pointer to address of firstvalue
    *pPointer = 10; // used indirection to assign a value

    cout << "firstvalue: " << firstvalue << '\n';
    cout << "secondvalue: " << secondvalue << '\n';
    return 0;
}