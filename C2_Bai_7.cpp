#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main() {
    int month, year;
    cout << "Nhap vao thang (1-12): ";
    cin >> month;
    cout << "Nhap vao nam: ";
    cin >> year;

    int days;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            if (isLeapYear(year)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        default:
            cout << "Thang khong hop le" << endl;
            return 1;
    }

    cout << "Thang " << month << " nam " << year << " co " << days << " ngay." << endl;
    return 0;
}