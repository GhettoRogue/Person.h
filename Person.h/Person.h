#ifndef UNTITLED18_PERSON_H
#define UNTITLED18_PERSON_H

#include <string>

using namespace std;

class Person {
private:
    string first_name;
    string last_name;
    int age;
    string gender;

public:
    Person() {}
    Person(const string &firstName, const string &lastName, int age, const string &gender) : first_name(firstName),
                                                                                             last_name(lastName),
                                                                                             age(age), gender(gender) {}

    int GetAge() const {
        return age;
    }

    const string &GetGender() const {
        return gender;
    }

    const string &GetFirstName() const {
        return first_name;
    }

    const string &GetSecondName() const {
        return last_name;
    }

    string GetFullName() const{
        return last_name + " " + first_name;
    }

    bool IsAdult() const{
        return age >=18;
    }
};

#endif //UNTITLED18_PERSON_H
