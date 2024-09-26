#include <gtest/gtest.h>
#include "assignment.h"  // Assuming this is the student's DFA implementation

// Test case 1: Valid string that starts with 'a' and ends with 'b'
TEST(DFATest, ValidString_StartsWithA_EndsWithB) {
    EXPECT_EQ(DFA("aabab"), "String Accepted");
}

// Test case 2: Invalid string that starts with 'b'
TEST(DFATest, InvalidString_StartsWithB) {
    EXPECT_EQ(DFA("bbba"), "String Rejected");
}

// Test case 3: Valid string with multiple 'a's and ends with 'b'
TEST(DFATest, ValidString_MultipleAs_EndsWithB) {
    EXPECT_EQ(DFA("aaabbb"), "String Accepted");
}

// Test case 4: Invalid string that ends with 'a'
TEST(DFATest, InvalidString_EndsWithA) {
    EXPECT_EQ(DFA("aabaa"), "String Rejected");
}

// Test case 5: Valid string with alternating 'a's and 'b's, ends with 'b'
TEST(DFATest, ValidString_AlternatingAB_EndsWithB) {
    EXPECT_EQ(DFA("abab"), "String Accepted");
}

// Test case 6: Invalid string with invalid character (not 'a' or 'b')
TEST(DFATest, InvalidString_InvalidCharacter) {
    EXPECT_EQ(DFA("aabbc"), "Invalid character in the input string");
}

// Test case 7: Empty string (edge case)
TEST(DFATest, EmptyString) {
    EXPECT_EQ(DFA(""), "String Rejected");
}

// Test case 8: String with only 'a's, should be rejected
TEST(DFATest, AllAs) {
    EXPECT_EQ(DFA("aaaa"), "String Rejected");
}

// Test case 9: String with only 'b's, should be rejected
TEST(DFATest, AllBs) {
    EXPECT_EQ(DFA("bbbb"), "String Rejected");
}

// Test case 10: String that exactly matches the accepted language definition
TEST(DFATest, ValidString_Simple) {
    EXPECT_EQ(DFA("ab"), "String Accepted");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
