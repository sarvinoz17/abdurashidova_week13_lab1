// Created by Programming Exam on 20/11/25.
#include <iostream>
using namespace std;

void reverseArr(int** arr, int size) {
    int* left = *arr;
    int* right = *arr + size - 1;

    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    reverseArr(&arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    delete[] arr;
    return 0;
}
