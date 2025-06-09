#include <iostream>
using namespace std;

int main() {
    int number, count = 0;

    cout << "Nhap so nguyen: ";
    cin >> number;

    if (number == 0) {
        count = 1;
    } else {

        int temp = abs(number);
        

        while (temp != 0) {
            count++;
            temp /= 10;
        }
    }

    cout << "So " << number << " co " << count << " chu so" << endl;
    
    return 0;
}