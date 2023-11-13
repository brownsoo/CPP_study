// 클래스와 객체 (3)
// Stack 클래스의 선언

#ifndef __CHARSTACK_H__
#define __CHARSTACK_H__

class CharStack {
    enum { size = 20 };
    int top;
    char buf[size];
    
public:
    CharStack() : top (size) {}
    bool chkEmpty() { return top == size; }
    bool chkFull() { return !top; }
    bool push(char ch);
    char pop();
};

#endif