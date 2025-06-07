#include <iostream>
using namespace std;

int main()
{
    int month;
    cout << "Nhap vao thang (1-12): ";  cin >> month;
    switch (month) {
        case 12:
        case 1:
        case 2:
            cout << "Mua dong"; break;
        case 3:
        case 4:
        case 5:
            cout << "Mua xuan"; break;
        case 6:
        case 7:
        case 8:
            cout << "Mua he";   break;
        case 9:
        case 10:
        case 11:
            cout << "Mua thu";  break;
        default:
            cout << "Thang khong hop le";   break;
    }
}