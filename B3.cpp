#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int m, n;
    cout << "Nhập số dòng m: ";
    cin >> m;
    cout << "Nhập số cột n: ";
    cin >> n;

    int a[m][n];

    cout << "Nhập các phần tử của mảng:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> *(*(a + i) + j); 
        }
    }


    int row;
    cout << "Nhập dòng cần tính tổng (0 - " << m - 1 << "): ";
    cin >> row;
    int sumRow = 0;
    for (int j = 0; j < n; j++) {
        sumRow += *(*(a + row) + j); 
    }
    cout << "Tổng các phần tử trên dòng " << row << " là: " << sumRow << endl;

    int col;
    cout << "Nhập cột cần tính tổng (0 - " << n - 1 << "): ";
    cin >> col;
    int sumCol = 0;
    for (int i = 0; i < m; i++) {
        sumCol += *(*(a + i) + col); 
    }
    cout << "Tổng các phần tử trên cột " << col << " là: " << sumCol << endl;

    int primeCount = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) { 
                if (isPrime(*(*(a + i) + j))) {
                    primeCount++;
                }
            }
        }
    }
    cout << "Số nguyên tố trên các đường biên là: " << primeCount << endl;

    for (int i = 0; i < m * n - 1; i++) {
        for (int j = i + 1; j < m * n; j++) {
            int* pi = *(a + i / n) + i % n; 
            int* pj = *(a + j / n) + j % n;
            if (*pi > *pj) {
                swap(*pi, *pj); 
                
            }
        }
    }

   
    
    cout << "Mảng sau khi sắp xếp tăng dần:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << *(*(a + i) + j) << " "; 
        }
        cout << endl;
    }

    return 0;
}