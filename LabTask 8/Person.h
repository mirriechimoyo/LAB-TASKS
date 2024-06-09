#pragma once
#include<string>
using namespace std;

class Person{
    public:
    Person();
    Person(float newWeight);
    ~Person();
    operator int ();
    float operator+(const Person& otherPerson);
    Person(string newFirstName, float newWeight);
    bool operator==(const Person& otherPerson) const;
    bool operator!=(const Person& otherPerson) const;
    bool operator<(const Person& otherPerson) const;
    bool operator>(const Person& otherPerson) const;
    operator string() const;
    operator float() const;

    private:
    float mWeight;
    string mFirstName;
    int mAge;
};
