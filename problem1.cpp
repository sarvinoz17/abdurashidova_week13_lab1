//
// Created by Programming Exam on 20/11/25.
//
#include <iostream>
using namespace std;

void set2hundred(int **p) {
**p = 100;
}
int main() {
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<x;

    int *p = &x;

    set2hundred(&p);
    cout<<"Updated value: "<<x<<endl;

    return 0;
}
