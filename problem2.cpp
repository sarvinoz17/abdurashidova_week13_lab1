//
// Created by Programming Exam on 20/11/25.
//
#include <iostream>
using namespace std;

void swapRef(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b ;
}
void swapPtr(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << a << " " << b ;
}
int main() {
    int x, y;
    cin >> x >> y;
    swapRef(x, y);
    return 0;
}