#include <iostream>
using namespace std;

int tinhGiaTriBieuThuc(int n) 
{
    if (n <= 1) 
    {return 0; }
    return (n - 1) * n + tinhGiaTriBieuThuc(n - 1); 
}

int main() {
    int n;
    cout << "Nhap gia tri n: ";
    cin >> n;

    if (n < 1) 
    {cout << "Gia tri n phai lon hon hoac bang 1." << endl;} 
    else 
    {
        int ketQua = tinhGiaTriBieuThuc(n);
        cout << "Gia tri cua bieu thuc S la: " << ketQua << endl;
    }

    return 0;
}