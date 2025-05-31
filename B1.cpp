#include <iostream>
using namespace std;

void chuanHoaChuoi(char s[]) {
    int len = 0;
    while (s[len] != '\0') len++;
    int start = 0;
    while (s[start] == ' ') start++;
    int end = len - 1;
    while (end >= start && s[end] == ' ') end--;

    char temp[1001];
    int idx = 0;
    bool lastSpace = false;
    for (int i = start; i <= end; ++i) {
        if (s[i] == ' ') {
            if (!lastSpace) {
                temp[idx++] = ' ';
                lastSpace = true;
            }
        } else {
            temp[idx++] = s[i];
            lastSpace = false;
        }
    }
    temp[idx] = '\0';

    bool vietHoa = true;
    for (int i = 0; temp[i] != '\0'; ++i) {
        if (temp[i] >= 'A' && temp[i] <= 'Z') temp[i] = temp[i] - 'A' + 'a';
        if (vietHoa && temp[i] >= 'a' && temp[i] <= 'z') {
            temp[i] = temp[i] - 'a' + 'A';
            vietHoa = false;
        }
        if (temp[i] == '.' || temp[i] == '?' || temp[i] == '!') vietHoa = true;
        else if (temp[i] != ' ') vietHoa = false;
    }

    int tlen = 0;
    while (temp[tlen] != '\0') tlen++;
    const char them[] = " E-learning ‘06’";
    for (int i = 0; them[i] != '\0'; ++i) {
        temp[tlen++] = them[i];
    }
    temp[tlen] = '\0';

    cout << "Chuoi sau khi chuan hoa: " << temp << endl;
}

int main() {
    char s[1001];
    cout << "Nhap chuoi: ";
    cin.getline(s, 1000);
    chuanHoaChuoi(s);
    return 0;
}