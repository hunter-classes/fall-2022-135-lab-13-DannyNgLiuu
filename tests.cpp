#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("task A") {
    CHECK(printRange(3,5) == "3 4 5 ");
}

TEST_CASE("task B") {
    CHECK(sumRange(1, 3) == 6);
    CHECK(sumRange(-2, 10) == 52);
}

TEST_CASE("task C") {
    int size = 10;
    int *arr = new int[size];
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    CHECK(sumArray(arr, size) == 43);
    CHECK(sumArray(arr, 5) == 34);
}

TEST_CASE("task D") {
    CHECK(isAlphanumeric("ABCD") == true);
    CHECK(isAlphanumeric("Abcd1234xyz") == true);
    CHECK(isAlphanumeric("KLMN 8-7-6") == false);
}

TEST_CASE("task E") {
    CHECK(nestedParens("\"((()))\"") == true);
    CHECK(nestedParens("\"()\"") == true);
    CHECK(nestedParens("\"\"") == true);
    CHECK(nestedParens("\"(((\"") == false);
    CHECK(nestedParens("\"(()\"") == false);
    CHECK(nestedParens("\")(\"") == false);
    CHECK(nestedParens("\"a(b)c\"") == false);
}