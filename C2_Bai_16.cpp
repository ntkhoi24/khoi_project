#include <iostream>
using namespace std;

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

int main() {
    int num1, num2;
    
    cout << "Nhap so thu nhat: ";
    cin >> num1;
    cout << "Nhap so thu hai: ";
    cin >> num2;
    
    if (num1 <= 0 || num2 <= 0) {
        cout << "Vui long nhap so nguyen duong!" << endl;
        return 1;
    }
    
    int lcm = findLCM(num1, num2);
    cout << "Boi chung nho nhat cua " << num1 << " va " << num2 << " la: " << lcm << endl;
    
    return 0;
}