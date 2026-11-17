#include "Person.h"

Person::Person() : mWeight(0.0f), mFirstName(""), mAge(0) {}

Person::Person(float newWeight) : mWeight(newWeight), mFirstName(""), mAge(0) {}

Person::Person(const string& newFirstName, float newWeight, int newAge)
    : mWeight(newWeight), mFirstName(newFirstName), mAge(newAge) {}

Person::~Person() {}

float Person::operator+(const Person& otherPerson) const
{
    return mWeight + otherPerson.mWeight;
}

bool Person::operator==(const Person& otherPerson) const
{
    return mFirstName == otherPerson.mFirstName;
}

bool Person::operator!=(const Person& otherPerson) const
{
    return !(*this == otherPerson);   // reuse == so the two can never disagree
}

bool Person::operator<(const Person& otherPerson) const
{
    return mAge < otherPerson.mAge;
}

bool Person::operator>(const Person& otherPerson) const
{
    return mAge > otherPerson.mAge;
}

Person::operator int() const
{
    return mAge;
}

Person::operator string() const
{
    return mFirstName;
}

Person::operator float() const
{
    return mWeight;
}
