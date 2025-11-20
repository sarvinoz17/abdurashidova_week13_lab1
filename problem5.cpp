// Created by Programming Exam on 20/11/25.
#include <iostream>
using namespace std;

int sum2D(int **m, int r, int c) {
    int sum = 0;
    int **rowPtr =m;
    int **rowEnd =  m + r;
    while (rowPtr != rowEnd) {
        int * colPtr = *rowPtr;
        int * colEnd =  colPtr + c;
        while (colPtr != colEnd) {
            sum += *colPtr;
            colPtr++;
        }
        rowPtr++;
    }
    return sum;
}
int main() {
    const int r = 3, c = 2;
    int row0[c], row1[c], row2[c];
    int* m[r] = {row0, row1, row2} ;
    cout<<"Enter valued for 3x2"<<endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin>>m[i][j];
        }
    }
    int total = sum2D(m, r, c);
    cout<<"Sum is "<<total<<endl;
    return 0;
}