#include "unity.h"
#include "calc.h"
#include <limits.h>

void setUp(void) { }
void tearDown(void) { }

void test_mag(void) {
    TEST_ASSERT_EQUAL_INT(21, mag(-21));
    TEST_ASSERT_EQUAL_INT(5, mag(5));
    TEST_ASSERT_EQUAL_INT(0, mag(0));
}

void test_signed(void) {
    int x = -1;
    TEST_ASSERT_TRUE_MESSAGE(x < 0, "int is not signed (x < 0 failed for x = -1)");
}

void test_addint(void) {
    // If int is 8-bit, INT_MAX will be 255
    TEST_ASSERT_TRUE_MESSAGE(INT_MAX > 255, "int appears to be 8-bit, expected at least 16-bit");
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_mag);
    RUN_TEST(test_signed);
    RUN_TEST(test_addint);
    return UNITY_END();
}
