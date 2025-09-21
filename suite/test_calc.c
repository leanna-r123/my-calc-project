#include "unity.h"
#include "calc.h"
#include <limits.h>

void setUp(void) { }
void tearDown(void) { }

void test_magnitude(void) {
    TEST_ASSERT_EQUAL_INT(21, magnitude(-21));
    TEST_ASSERT_EQUAL_INT(5, magnitude(5));
    TEST_ASSERT_EQUAL_INT(0, magnitude(0));
}

void test_signed_int(void) {
    int x = -1;
    TEST_ASSERT_TRUE_MESSAGE(x < 0, "int is not signed (x < 0 failed for x = -1)");
}

void test_add_int_size(void) {
    // If int is 8-bit, INT_MAX will be 255
    TEST_ASSERT_TRUE_MESSAGE(INT_MAX > 255, "int appears to be 8-bit, expected at least 16-bit");
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_magnitude);
    RUN_TEST(test_signed_int);
    RUN_TEST(test_add_int_size);
    return UNITY_END();
}
