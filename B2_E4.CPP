#include <iostream>
using namespace std;

double tinhTienThuePhong(int hIN, int mIN, int hOUT, int mOUT, double pH, double pM) 
{
    if (hIN < 8 || hIN > 23 || hOUT < 8 || hOUT > 23) {
        cout << "Thoi gian nhan hoac tra phong khong hop le!" << endl;
        return -1;
    }

    int SmIN = hIN * 60 + mIN;
    int SmOUT = hOUT * 60 + mOUT;

    if (SmOUT <= SmIN) {
        cout << "Thoi gian tra phong phai lon hon thoi gian nhan phong!" << endl;
        return -1;
    }

    int tongThoiGianThue = SmOUT - SmIN;

    int soGioChan = tongThoiGianThue / 60;
    int soPhutLe = tongThoiGianThue % 60;

    double tongTien = soGioChan * pH + soPhutLe * pM;

    return tongTien;
}

int main() {
    int hIN, mIN, hOUT, mOUT;
    double pH, pM;

    cout << "Nhap gio nhan phong (8-23): ";
    cin >> hIN;
    cout << "Nhap phut nhan phong (0-59): ";
    cin >> mIN;
    cout << "Nhap gio tra phong (8-23): ";
    cin >> hOUT;
    cout << "Nhap phut tra phong (0-59): ";
    cin >> mOUT;
    cout << "Nhap gia theo gio: ";
    cin >> pH;
    cout << "Nhap gia theo phut: ";
    cin >> pM;

    double tongTien = tinhTienThuePhong(hIN, mIN, hOUT, mOUT, pH, pM);

    if (tongTien != -1) {
        cout << "Tong so tien phai thanh toan: " << tongTien << " VND" << endl;
    }

    return 0;
}