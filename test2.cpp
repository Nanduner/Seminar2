#include "pch.h"
#include "SortBin.h"
#include "ShakerSort.h"
TEST(shakersort, SingleElementArray) {
    int arr[] = { 5 };
    shakersort(arr, 1);
    EXPECT_EQ(arr[0], 5);
}


TEST(shakersort, SortedArray) {
    int arr[] = { 1, 2, 3, 4, 5 };
    shakersort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(shakersort, ReversedArray) {
    int arr[] = { 5, 4, 3, 2, 1 };
    shakersort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}
TEST(shakersort, AllSameElements) {
    int arr[] = { 7, 7, 7, 7 };
    shakersort(arr, 4);
    int expected[] = { 7, 7, 7, 7 };
    for (int i = 0; i < 4; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(shakersort, ArrayWithNegativeNumbers) {
    int arr[] = { 3, -1, 2, -5, 0 };
    shakersort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}


TEST(shakersort, DoubleArray) {
    double arr[] = { 3.1, -1.2, 2.0, -5.5, 0.0 };
    shakersort(arr, 5);
    double expected[] = { -5.5, -1.2, 0.0, 2.0, 3.1 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(insertionSortWithBinarySearch, SingleElementArray) {
    int arr[] = { 5 };
    insertionSortWithBinarySearch(arr, 1);
    EXPECT_EQ(arr[0], 5);
}


TEST(insertionSortWithBinarySearch, SortedArray) {
    int arr[] = { 1, 2, 3, 4, 5 };
    insertionSortWithBinarySearch(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(insertionSortWithBinarySearch, ReversedArray) {
    int arr[] = { 5, 4, 3, 2, 1 };
    insertionSortWithBinarySearch(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}
TEST(insertionSortWithBinarySearch, AllSameElements) {
    int arr[] = { 7, 7, 7, 7 };
    insertionSortWithBinarySearch(arr, 4);
    int expected[] = { 7, 7, 7, 7 };
    for (int i = 0; i < 4; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(insertionSortWithBinarySearch, ArrayWithNegativeNumbers) {
    int arr[] = { 3, -1, 2, -5, 0 };
    insertionSortWithBinarySearch(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}


TEST(insertionSortWithBinarySearch, DoubleArray) {
    double arr[] = { 3.1, -1.2, 2.0, -5.5, 0.0 };
    insertionSortWithBinarySearch(arr, 5);
    double expected[] = { -5.5, -1.2, 0.0, 2.0, 3.1 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}


