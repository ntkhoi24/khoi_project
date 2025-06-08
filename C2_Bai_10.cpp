#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    cout << "Cac so co 4 chu so ma tong cac chu so chia het cho 6:\n";

    for (int i = 1000; i <= 9999; i++) {

        if (sumOfDigits(i) % 6 == 0) {
            cout << i << " ";
        }
    }
    
    cout << endl;
    return 0;
}