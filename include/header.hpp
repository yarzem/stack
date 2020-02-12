// Copyright 2018 Your Name <your_email>

#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_
#include <string>
#include <iostream>
class dog{
public:
    dog(){}
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
    data(){}
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
#endif // INCLUDE_HEADER_HPP_
