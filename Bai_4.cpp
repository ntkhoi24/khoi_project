#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    char hoTen1_arr [50], hoTen2_arr [50];
    int namSinh1, namSinh2, tuoi1, tuoi2;

    cout << "Nhap thong tin nguoi thu nhat: \n";
    cout << "Ho va ten: ";
    cin.getline(hoTen1_arr, sizeof(hoTen1_arr));
    cout << "Nam sinh: ";
    cin >> namSinh1;
    cin.ignore();

    cout << "Nhap thong tin nguoi thu hai: \n";
    cout << "Ho va ten: ";
    cin.getline(hoTen2_arr, sizeof(hoTen2_arr));
    cout << "Nam sinh: ";
    cin >> namSinh2;
    cin.ignore();

    int namHienTai = 2025;
    tuoi1 = namHienTai - namSinh1;
    tuoi2 = namHienTai - namSinh2;

    cout << "\nThong tin da nhap: \n";
    cout << "Nguoi thu nhat: " << hoTen1_arr << ", " << tuoi1 << " tuoi." << endl;
    cout << "Nguoi thu hai: " << hoTen2_arr << ", " << tuoi2 << " tuoi." << endl;

    return 0;
}