#include <iostream>
#include "Person.h"

using namespace std;

void PrintPerson(Person &person) {
    cout << "Имя: " << person.GetFirstName()<< endl;
    cout << "Фамилия: " << person.GetSecondName() << endl;
    cout << "Возраст: " << person.GetAge() << endl;
    cout << "Пол: " << person.GetGender() << endl;
    cout << "Полное имя: " << person.GetFullName()<< endl;
}

void CheckAdult(Person &person) {
    if (person.IsAdult()) {
        cout << person.GetFullName() << " является совершеннолетним." << endl;
    } else {
        cout << person.GetFullName()<< " не является совершеннолетним." << endl;
    }
}

int main() {

    Person person("Владимир","Игнатьев", 27,"мужской");
    PrintPerson(person);
    CheckAdult(person);

    return 0;
}
