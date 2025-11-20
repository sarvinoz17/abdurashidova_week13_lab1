#include <iostream>
#include <string>
using namespace std;

void printIfValid(int* p) {
    if (p == nullptr)
        cout << "null";
    else
        cout << *p;
}

int main() {
    string a, b;
    cin >> a >> b;

    int val1, val2;
    int* p1 = nullptr;
    int* p2 = nullptr;

    if (a != "n") {
        val1 = stoi(a);
        p1 = &val1;
    }

    if (b != "n") {
        val2 = stoi(b);
        p2 = &val2;
    }

    printIfValid(p1);
    cout << ", ";
    printIfValid(p2);

    return 0;
}
