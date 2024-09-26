#include <gtest/gtest.h>
#include "assignment.h"  // Assuming this is the student's DFA implementation

// Test case 1: Valid string
TEST(DFATest, ValidString) {
    EXPECT_EQ(DFA("aabab"), "String Accepted");
}

// Test case 2: Invalid string starting with 'b'
TEST(DFATest, InvalidString_StartsWithB) {
    EXPECT_EQ(DFA("bbba"), "String Rejected");
}

// Add more test cases here...
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
