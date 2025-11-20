#include <iostream>
using namespace std;

int* findMax(int* arr, int size) {
    int* maxp = arr;
    int* p = arr + 1;
    int* end = arr + size;

    while (p < end) {
        if (*p > *maxp) {
            maxp = p;
        }
        p++;
    }
    return maxp;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int* mp = findMax(arr, n);

    cout << *mp << endl;
    return 0;
}
