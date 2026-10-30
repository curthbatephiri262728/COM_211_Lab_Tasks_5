#include <iostream>
using namespace std;
int main() {
    // declaring a pointer and initialzing it
    int* pPointer = nullptr;

    int integerVar = 5;
    // assign pointer to address of object
    pPointer = &integerVar;

    //output the value of integerVar
    cout <<"integerVar:" << integerVar << endl;

    //output the address of integerVar
    cout << "Address of integerVar:" << &integerVar << endl;

    //output the address assigned to pPointer
    cout << "pPointer: " << pPointer << endl;

    // output the address of pPointer 
    cout << " address of pPointer " << &pPointer << endl;

    return 0;
}