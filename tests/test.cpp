// Copyright 2018 Your Name <your_email>

#include <gtest/gtest.h>
#include "header.hpp"
TEST(Example, Stack) {
    EXPECT_EQ(std::is_move_constructible<stack1<int>>::value, true);
    EXPECT_EQ(std::is_move_assignable<stack1<int>>::value, true);
    EXPECT_EQ(std::is_move_constructible<stack2<int>>::value, true);
    EXPECT_EQ(std::is_move_assignable<stack2<int>>::value, true);
    EXPECT_EQ(std::is_copy_constructible<stack1<int>>::value, false);
    EXPECT_EQ(std::is_copy_assignable<stack1<int>>::value, false);
    EXPECT_EQ(std::is_copy_constructible<stack2<int>>::value, false);
    EXPECT_EQ(std::is_copy_assignable<stack2<int>>::value, false);
    stack1 <int> s;
    int a = 48;
    s.push(a);
    EXPECT_EQ(s.head(), 48);
    stack2 <std::string> x;
    x.push("kek");
    x.push("lol");
    x.push("azaz");
    EXPECT_EQ((std::string) x.pop(), "azaz");
    dog Lavr;
    stack<dog> st;
    st.push(Lavr);
    st.push_emplace("world");
    EXPECT_EQ(st.head().word, "world");
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
