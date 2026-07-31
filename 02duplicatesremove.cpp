// Remove Duplicates from Sorted Array

// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

// Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates, return the number of unique elements k.

// The first k elements of nums should contain the unique numbers in sorted order. The remaining elements beyond index k - 1 can be ignored.

#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) return n;
    int temp[n];
    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) temp[j++] = arr[i];
    }
    temp[j++] = arr[n - 1];
    for (int i = 0; i < j; i++) arr[i] = temp[i];
    return j;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    n = removeDuplicates(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}
