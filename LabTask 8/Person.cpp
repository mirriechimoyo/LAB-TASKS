#include "Person.h"
#include<string>
Person::Person(){
    string mFirstName ="default";
    int mAge = 0;
    float mWeight = 0.0f;
}
Person::Person(string newFirstName, float newWeight){
    string mFirstName = newFirstName;
    int mAge = 0;
    float mWeight = newWeight;
}
Person::~Person(){

}
Person& Person::operator = (const Person& otherPerson){
    Person person;
    person.mWeight = this->mWeight + otherPerson.mWeight;
    person.mAge = this->mAge + otherPerson.mAge;
    person.mFirstName = this->mFirstName + otherPerson.mFirstName;
    return *this;
}
bool Person::operator==(const Person& otherPerson) const {
    return this->mFirstName == otherPerson.mFirstName;
}

bool Person::operator!=(const Person& otherPerson) const {
    return !(*this == otherPerson);
}
bool Person::operator<(const Person& otherPerson) const {
    return this->mAge < otherPerson.mAge;
}
bool Person::operator>(const Person& otherPerson) const {
    return this->mAge > otherPerson.mAge;
}
Person::operator int(){
    return mAge;
}
Person::operator string() const {
    return mFirstName;
}

Person::operator float() const {
    return mWeight;
}