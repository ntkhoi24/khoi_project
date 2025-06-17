#include <iostream>
using namespace std;

void drawHollowRectangle(int height, int width) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= width; j++) {
            if (i == 1 || i == height || j == 1 || j == width) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void drawHollowTriangle(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == height) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    int height, width;
    
    cout << "Nhap chieu cao hinh chu nhat: ";
    cin >> height;
    cout << "Nhap chieu rong hinh chu nhat: ";
    cin >> width;
    
    cout << "\nHinh chu nhat rong:\n";
    drawHollowRectangle(height, width);
    
    cout << "\nNhap chieu cao tam giac vuong: ";
    cin >> height;
    
    cout << "\nHinh tam giac vuong rong:\n";
    drawHollowTriangle(height);
    
    return 0;
}