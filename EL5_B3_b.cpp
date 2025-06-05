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

    int sum = 0;

    for (int j = 0; j < n; j++) {
        sum += A[0][j];       
        sum += A[n - 1][j];   
    }

    for (int i = 1; i < n - 1; i++) {
        sum += A[i][0];       
        sum += A[i][n - 1];   
    }

    cout << "Tong gia tri cac phan tu o 4 vien ngoai cung cua ma tran A la: " << sum << endl;

    return 0;
}