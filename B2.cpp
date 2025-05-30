#include <iostream>
using namespace std;

void mergeArrays(int* A, int n, int* B, int m, int* C) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (*(A + i) < *(B + j)) {
            *(C + k) = *(A + i);
            i++;
        } else {
            *(C + k) = *(B + j);
            j++;
        }
        k++;
    }

    while (i < n) {
        *(C + k) = *(A + i);
        i++;
        k++;
    }

    while (j < m) {
        *(C + k) = *(B + j);
        j++;
        k++;
    }
}

int main() {
    int n, m;

    cout << "Nhap so phan tu cua day A: ";
    cin >> n;
    int A[n];
    cout << "Nhap cac phan tu cua day A (tang dan):\n";
    for (int i = 0; i < n; i++) {
        cout << "A[" << i + 1 << "] = ";
        cin >> A[i];
    }

    cout << "Nhap so phan tu cua day B: ";
    cin >> m;
    int B[m];
    cout << "Nhap cac phan tu cua day B (tang dan):\n";
    for (int i = 0; i < m; i++) {
        cout << "B[" << i + 1 << "] = ";
        cin >> B[i];
    }

    int C[n + m];

    mergeArrays(A, n, B, m, C);

    cout << "Day C sau khi tron (tang dan):\n";
    for (int i = 0; i < n + m; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}