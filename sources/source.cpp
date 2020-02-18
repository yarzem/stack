// Copyright 2018 Your Name <your_email>

#include <header.hpp>
#include <iostream>

int main() {
    dog Lavr;
    stack<dog> st;
    st.push(Lavr);
    st.push_emplace("world");
    st.pop();
    st.pop();
    return 0;
}
