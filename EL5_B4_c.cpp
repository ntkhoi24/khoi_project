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

    int sum = 0, count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = n - i; j < n; j++) { 
            sum += A[i][j];
            count++;
        }
    }

    double avg = (count > 0) ? (double)sum / count : 0;

    cout << "Gia tri trung binh cua cac phan tu nam ben duoi duong cheo phu la: " << avg << endl;

    return 0;
}