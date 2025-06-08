#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Nhap so nguyen duong: ";
    cin >> n;

    if (n <= 0) {
        cout << "Vui long nhap so nguyen duong!" << endl;
        return 1;
    }

    cout << "Cac uoc so cua " << n << " la: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            sum += i;
        }
    }

    cout << "\nTong cac uoc so la: " << sum << endl;
    
    return 0;
}