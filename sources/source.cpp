// Copyright 2018 Your Name <your_email>

#include <header.hpp>
#include <iostream>

class dog{
public:
    std::string word = "gav";
    int i;
explicit dog(const int &a)
    {
        i = a;
    }
};
template<typename T>
struct data
{
    T value;
    data *prev = nullptr;
};
template<typename T>
class stack
{
public:
    void clearer()
    {
        if (top)
        {
            while (top->prev)
            {
                data<T> *tmp;
                tmp = top;
                top = top->prev;
                delete (tmp);
            }
            delete (top);
        }
    }

    void push(T &&value)
    {
        if (top)
        {
            clearer();
        }
        top = new data<T>;
        top->prev = nullptr;
        top->value = value;
    };
    void push(const T &value)
    {
        data<T> *tmp;
        tmp = top;
        top = new data<T>;
        top->prev = tmp;
        top->value = value;
    };
    T pop()
    {
        data<T> *tmp;
        tmp = top;
        top = top->prev;
        T tmps = tmp->value;
        if (tmp)
        { delete (tmp); }
        return tmps;
    };
    const T &head() const {
        return top->value;
    }
    template<typename ... Args>
    void push_emplace(Args &&... value)
    {
        T tmp(value...);
        this->push(tmp);
    }

    data<T> *top = nullptr;

    ~stack() { clearer(); }
};


int main() {
    dog Lavr(1);
    dog Pitbul(2);
    stack<dog> st;

    st.push(Lavr);
    st.push(Pitbul);
    st.push_emplace(3);
    std::cout << st.head().word;
    return 0;
}
