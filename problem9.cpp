#include <iostream>
using namespace std;

void avg(const double* arr, int size, double* result) {
    const double* p = arr;
    const double* end = arr + size;

    double sum = 0;

    while (p < end) {
        sum += *p;
        p++;
    }

    *result = sum / size;
}

int main() {
    int n;
    cin >> n;

    double arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    double result;
    avg(arr, n, &result);

    cout << result;

    return 0;
}
