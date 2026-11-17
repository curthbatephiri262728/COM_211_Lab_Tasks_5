#pragma once

#include <string>
using namespace std;

class Person
{
public:
    Person();
    Person(float newWeight);
    Person(const string& newFirstName, float newWeight, int newAge = 0);

    ~Person();

    // Overload the add operator: adds the two weights
    float operator+(const Person& otherPerson) const;

    // Relational operators using mFirstName
    bool operator==(const Person& otherPerson) const;
    bool operator!=(const Person& otherPerson) const;

    // Relational operators using mAge
    bool operator<(const Person& otherPerson) const;
    bool operator>(const Person& otherPerson) const;

    // Conversion operators
    operator int() const;      // gives the age
    operator string() const;   // gives the first name
    operator float() const;    // gives the weight

private:
    float  mWeight;
    string mFirstName;
    int    mAge;
};
