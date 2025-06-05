#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Nhap cap cua ma tran vuong A (n): ";
    cin >> n;

    int A[n][n];

    cout << "Nhap cac phan tu cua ma tran A:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "A[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> A[i][j];
        }
    }

    cout << "Cac phan tu tren duong cheo chinh cua ma tran A la:\n";
    for (int i = 0; i < n; i++) {
        cout << A[i][i] << " "; 
    }
    cout << endl;

    return 0;
}