#include <iostream>
using namespace std;

bool isValidInput(int a, int b, int n) {
    return (a > 0 && b > 0 && n > 0 && a < n && b < n);
}

int main() {
    int a, b, n;
    
    do {
        cout << "Nhap n (n > 0): ";
        cin >> n;
        cout << "Nhap a (0 < a < n): ";
        cin >> a;
        cout << "Nhap b (0 < b < n): ";
        cin >> b;
        
        if (!isValidInput(a, b, n)) {
            cout << "Du lieu khong hop le. Vui long nhap lai!\n";
        }
    } while (!isValidInput(a, b, n));

    cout << "Cac cap so thoa man dieu kien la:\n";
    bool found = false;
    
    for (int i = 1; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = i + j;
            if (sum % a == 0 && sum % b != 0) {
                cout << "(" << i << ", " << j << ")" << endl;
                found = true;
            }
        }
    }
    
    if (!found) {
        cout << "Khong tim thay cap so nao thoa man dieu kien!\n";
    }

    return 0;
}