#include <iostream>
using namespace std;

void printCross(int n) {
    int size = 2 * n + 1; 
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == n || j == n) {
                cout << "+";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    printCross(n);

    return 0;
}