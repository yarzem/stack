// Copyright 2018 Your Name <your_email>

#include <gtest/gtest.h>
#include "source.cpp"
TEST(Example, EmptyTest) {
     dog Lavr(1);
    dog Pitbul(2);
    stack<dog> st;
    st.push(Lavr);
    EXPECT_EQ(st.head().i,1);
    st.push(Pitbul);
    EXPECT_EQ(st.head().i,2);
    st.push_emplace(3);
    EXPECT_EQ(st.head().i,3);
    EXPECT_EQ(st.head().word,"gav");
    
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
