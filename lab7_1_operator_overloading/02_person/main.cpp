#include <iostream>
#include "Person.h"

int main()
{
    // The third argument is the age (needed for the < and > tests).
    Person Jane = Person("Jane", 60.0f, 25);
    Person John = Person("John", 75.0f, 30);

    float totalWeight = Jane + John;
    cout << "Total weight: " << totalWeight << endl;

    // 2(d) relational operators using mFirstName
    if (Jane == John) {
        cout << "This is the same person" << endl;
    }

    if (Jane != John) {
        cout << "This is NOT the same person" << endl;
    }

    // 2(e) relational operators using mAge
    if (Jane < John) {
        cout << "Jane is younger than John" << endl;
    }

    if (John > Jane) {
        cout << "John is older than Jane" << endl;
    }

    // 3 conversion operator: Person -> int (the age)
    int johnAge = John;
    cout << "John's Age: " << johnAge << endl;

    // 4 conversion operators: Person -> string and Person -> float
    string janeFirstName = Jane;
    cout << "Jane's FirstName: " << janeFirstName << endl;

    float janeWeight = Jane;
    cout << "Jane's weight: " << janeWeight << endl;

    return 0;
}
