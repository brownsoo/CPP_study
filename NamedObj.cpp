#include <iostream>
#include "NamedObj.h"

NamedObj::NamedObj(const char* s) {
    name = new char[strlen(s) + 1];
    strcpy(name, s);
    id = ++nConstr;
}

NamedObj::~NamedObj() {
    ++nDestr;
    delete[] name;
}

// static 데이터 멤버의 정의 및 초기화는 헤더파일 밖에서 
int NamedObj::nConstr = 0;
int NamedObj::nDestr = 0;