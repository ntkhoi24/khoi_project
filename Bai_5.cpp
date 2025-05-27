#include <iostream>
using namespace std;

int main() 
{
    int num1, num2;
    char operation;
    int KQ;

    cout << "Nhap so nguyen thu nhat: ";
    cin >> num1;
    cout << "Nhap so nguyen thu hai: ";
    cin >> num2;

    cout << "Nhap phep toan (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            KQ = num1 + num2;
            cout << num1 << " + " << num2 << " = " << KQ << endl;
            break;
        case '-':
            KQ = num1 - num2;
            cout << num1 << " - " << num2 << " = " << KQ << endl;
            break;
        case '*':
            KQ = num1 * num2;
            cout << num1 << " * " << num2 << " = " << KQ << endl;
            break;
        case '/':

            if (num2 != 0) {
                KQ = num1 / num2;
                cout << num1 << " / " << num2 << " = " << KQ << endl;
            } else {
                cout << "Loi: Khong the chia cho 0!" << endl;
            }
            break;
        default:
            cout << "Phep toan khong hop le!" << endl;
            break;
    }

    return 0;
}