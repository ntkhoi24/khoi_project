#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";    cin >> n;
    cin.ignore();

    char ds[100][101];
    for (int i = 0; i < n; ++i) {
        cout << "Nhap ho va ten sinh vien thu " << i + 1 << ": ";
        cin.getline(ds[i], 100);
    }

    // a) Tim sinh vien co ho la "Nguyen"
    cout << "\nSinh vien co ho la \"Nguyen\":\n";
    for (int i = 0; i < n; ++i) {
        int j = 0;
        char ho[101];
        int idx = 0;
        while (ds[i][j] != ' ' && ds[i][j] != '\0') {
            ho[idx++] = ds[i][j];
            j++;
        }
        ho[idx] = '\0';
        const char nguyen[] = "Nguyen";
        bool laNguyen = true;
        for (int k = 0; nguyen[k] != '\0' || ho[k] != '\0'; ++k) {
            if (nguyen[k] != ho[k]) {
                laNguyen = false;
                break;
            }
        }
        if (laNguyen) {
            cout << ds[i] << endl;
        }
    }

    // b) Dem so ho khac nhau
    int soHo = 0;
    char cacHo[100][101];
    for (int i = 0; i < n; ++i) {
        int j = 0, idx = 0;
        char ho[101];
        while (ds[i][j] != ' ' && ds[i][j] != '\0') {
            ho[idx++] = ds[i][j];
            j++;
        }
        ho[idx] = '\0';
        bool daCo = false;
        for (int k = 0; k < soHo; ++k) {
            int m = 0;
            while (cacHo[k][m] == ho[m] && ho[m] != '\0' && cacHo[k][m] != '\0') m++;
            if (ho[m] == '\0' && cacHo[k][m] == '\0') {
                daCo = true;
                break;
            }
        }
        if (!daCo) {
            for (int m = 0; ho[m] != '\0'; ++m) cacHo[soHo][m] = ho[m];
            cacHo[soHo][idx] = '\0';
            soHo++;
        }
    }
    cout << "\nSo ho khac nhau: " << soHo << endl;

    // c) Tim sinh vien co ten bat dau bang A hoac T
    cout << "\nSinh vien co ten bat dau bang A hoac T:\n";
    for (int i = 0; i < n; ++i) {
        int len = 0;
        while (ds[i][len] != '\0') len++;
        int pos = len - 1;
        while (pos > 0 && ds[i][pos - 1] != ' ') pos--;
        char ch = ds[i][pos];
        if (ch >= 'a' && ch <= 'z') ch = ch - 'a' + 'A';
        if (ch == 'A' || ch == 'T') {
            cout << ds[i] << endl;
        }
    }

    return 0;
}