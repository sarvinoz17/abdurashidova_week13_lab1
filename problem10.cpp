#include <iostream>
using namespace std;

void mergeSorted(const int* a, int n, const int* b, int m, int* out) {
    const int* endA = a + n;
    const int* endB = b + m;
    int* outPtr = out;

    while (a < endA && b < endB) {
        if (*a < *b) {
            *outPtr++ = *a++;
        } else {
            *outPtr++ = *b++;
        }
    }

    while (a < endA) {
        *outPtr++ = *a++;
    }

    while (b < endB) {
        *outPtr++ = *b++;
    }
}

int main() {
    int n, m;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; ++i) cin >> a[i];

    cin >> m;
    int* b = new int[m];
    for (int i = 0; i < m; ++i) cin >> b[i];

    int* out = new int[n + m];
    mergeSorted(a, n, b, m, out);

    for (int i = 0; i < n + m; ++i) {
        cout << out[i];
    }
    cout << endl;

    delete[] a;
    delete[] b;
    delete[] out;

    return 0;
}
