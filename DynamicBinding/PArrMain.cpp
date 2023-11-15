// 10강. 상속(1)
// 동적 연결
#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

void PrintPerson(const Person *const p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        p[i]->print();
        cout << endl;
    }
}

int main()
{
    Person dudley("Dudley");
    Student harry("Harry", "Hogwarts");
    Student ron("Ron", "Hogwarts");

    dudley.print();
    cout << endl;

    harry.print();
    cout << endl
         << endl;

    Person *pPerson[3];
    pPerson[0] = &dudley;
    pPerson[1] = &harry;
    pPerson[2] = &ron;
    
    PrintPerson(pPerson, 3);
    
    cout << "다이나믹 캐스트" << endl;
    
    Person *p1 = &harry;
    Student *p2 = dynamic_cast<Student *>(p1); // dynamic_cast 를 사용하려면 클래스 선언문에 가상함수를 포함하고 있어야 함
    if (p2) {
        cout << p2->getSchool() << endl;
    }

    return 0;
}