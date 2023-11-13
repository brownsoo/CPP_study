#include <iostream>
#include <cstring>
#include "MyString.h"

MyString::MyString(int s): len(s), bufSize(s) {
    buf = new char[s+ 1];
    buf[s] = '\0';
}

MyString::MyString(): len(0), bufSize(0) {
    buf = new char[1];
    buf[0] = '\0';
}

MyString::MyString(const char* str) {
    len = bufSize = strlen(str);
    buf = new char[len + 1];
    strcpy(buf, str);
}

MyString::MyString(const MyString& mstr): len(mstr.len), bufSize(mstr.bufSize) {
    buf = new char[len + 1];
    strcpy(buf, mstr.buf);
}

MyString::MyString(MyString&& mstr)
    : len(mstr.len), bufSize(mstr.bufSize), buf(mstr.buf) {
    mstr.buf = nullptr;
}

MyString::~MyString() {
    delete[] buf;
}

int MyString::length() const {
    return len;
}
// 대입 연산자
MyString& MyString::operator=(const MyString& mstr) {
    if (bufSize < mstr.len) {
        delete[] buf;
        len = bufSize = mstr.len;
        buf = new char[len + 1];
    } else {
        len = mstr.len;
    }
    strcpy(buf, mstr.buf);
    return *this;
}

// 이동 연산자
MyString& MyString::operator=(MyString&& mstr) {
    delete[] buf;
    len = mstr.len;
    bufSize = mstr.bufSize;
    buf = mstr.buf; // 포인터 복사 
    mstr.buf = nullptr; // 원래 객체의 포인터를 null로 설정
    return *this;
}

// 문자열 연결 연산자
MyString MyString::operator+(const MyString& mstr) const {
    MyString tmstr(len + mstr.len); // private 생성자 호출
    strcpy(tmstr.buf, buf);
    strcpy(tmstr.buf + len, mstr.buf);
    return tmstr;
}

MyString& MyString::operator+=(const MyString& mstr) {
    if (bufSize < len + mstr.len) {
        char* tbuf = new char[(bufSize = len + mstr.len) + 1];
        strcpy(tbuf, buf);
        delete[] buf;
        buf = tbuf;
    }
    strcpy(buf + len, mstr.buf);
    len += mstr.len;
    return *this;
}