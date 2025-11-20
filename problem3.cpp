#include <iostream>
using namespace std;

int countValid(int* arr[], int size) {

    int count = 0;

    int **ptr = arr;
    int **end = arr + size;

    while (ptr != end) {
        if (*ptr != nullptr) {
            count++;
        }
        ptr++;
    }
    return count;
}
int main() {
    int a, b, c;
    a = 1, b = 2, c = 3;
    int* arr[5] = {&a, &b, nullptr, &c, nullptr};
    cout << "Number of valid pointers: "<<countValid(arr, 5)<<endl;
    return 0;
}