// 클래스와 객체 (3)
// 2018. 07. 03

class CharStack {
    enum { size = 20 };
    int top;
    char buf[size];
    
public:
    CharStack() : top { size } {}
    bool chkEmpty() { return top == size; }
    bool chkFull() { return !top; }
    bool push(char ch);
    char pop();
};