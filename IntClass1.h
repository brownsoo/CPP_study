// 8강. 연산자 다중정의(1)

class IntClass1
{
    int a;
  public:
    IntClass1(int n=0) : a(n) {}  
    IntClass1& operator++ () { // 전위 표기 
        ++a;
        return *this;
    }
    int getValue() const { return a; }
};