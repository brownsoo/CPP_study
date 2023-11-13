// 7강 클래스와 객체 (3)
// 복소수 클래스 구현 (1)

#ifndef __COMPLEX1_H__
#define __COMPLEX1_H__

class Complex1
{
    double rPart, iPart;

public:
    // 생성자
    Complex1(double r = 0.0, double i = 0.0) : rPart{r}, iPart{i} {}

    Complex1 conj() const
    {
        return Complex1{rPart, -iPart};
    }

    Complex1 add(const Complex1 &c) const
    {
        return Complex1{rPart + c.rPart, iPart + c.iPart};
    }

    Complex1 sub(const Complex1 &c) const
    {
        return Complex1{rPart - c.rPart, iPart - c.iPart};
    }

    Complex1 mul(const Complex1 &c) const;
    Complex1 div(const Complex1 &c) const;
    void display() const;
};

#endif