// 정적 연결 

#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

int main() {
    Person *p1 = new Person("Dudley");
    p1->print();
    cout << endl;
    
    Person *p2 = new Student("Harry", "Hogwarts");
    p2->print(); cout << endl; // Person 포인터의 프린트 함수가 호출된다.
    
    ((Student*)p2)->print(); cout << endl; // 타입 케스팅이 필요하다.
    
    return 0;
}