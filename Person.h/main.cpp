#include <iostream>
#include "Person.h"

using namespace std;

void PrintPerson(Person &person) {
    cout << "���: " << person.GetFirstName()<< endl;
    cout << "�������: " << person.GetSecondName() << endl;
    cout << "������: " << person.GetAge() << endl;
    cout << "���: " << person.GetGender() << endl;
    cout << "������ ���: " << person.GetFullName()<< endl;
}

void CheckAdult(Person &person) {
    if (person.IsAdult()) {
        cout << person.GetFullName() << " ���� ᮢ��襭����⭨�." << endl;
    } else {
        cout << person.GetFullName()<< " �� ���� ᮢ��襭����⭨�." << endl;
    }
}

int main() {

    Person person("��������","�����쥢", 27,"��᪮�");
    PrintPerson(person);
    CheckAdult(person);

    return 0;
}
