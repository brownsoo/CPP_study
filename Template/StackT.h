#ifndef STACKT_T_H
#define STACKT_T_H

using namespace std;

template <typename T> class Stack
{
    T *buf;
    int top;
    int size;

public:
    Stack(int s);
    virtual ~Stack();
    bool full() const;
    bool empty() const;
    void push(const T &a);
    void push(T &&a);
    T &&pop();
};

template <typename T>
Stack<T>::Stack(int s) : size(s), top(s)
{
    buf = new T[size];
}

template <typename T>
Stack<T>::~Stack()
{
    delete[] buf;
}

template <typename T>
bool Stack<T>::full() const
{
    return !top;
}

template <typename T>
bool Stack<T>::empty() const
{
    return top == size;
}

template <typename T>
void Stack<T>::push(const T &a)
{
    buf[--top] = a;
}

template <typename T>
void Stack<T>::push(T &&a)
{
    buf[--top] = std::move(a);
}

template <typename T>
T &&Stack<T>::pop()
{
    return std::move(buf[top++]);
}

#endif