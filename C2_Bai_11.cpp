#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Vui long nhap so nguyen duong!" << endl;
        return 1;
    }
    
    cout << n << " = ";
    cout << "1"; 

    int divisor = 2;
    while (n > 1) {
        if (n % divisor == 0) {
            cout << "*" << divisor;
            n = n / divisor;
        } else {
            divisor++;
        }
    }
    
    cout << endl;
    return 0;
}