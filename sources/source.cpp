// Copyright 2018 Your Name <your_email>

#include <header.hpp>
#include <iostream>

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
