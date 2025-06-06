#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double a, b, c, d;
    cout << "Nhap vao 4 so a, b, c, d: \n";   
    cin >> a >> b >> c >> d;

    double numbers[] = {a, b, c, d};
    double maxDiff = 0;
    double num1 = 0, num2 = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            double diff = abs(numbers[i] - numbers[j]);
            if (diff > maxDiff) {
                maxDiff = diff;
                num1 = numbers[i];
                num2 = numbers[j];
            }
        }
    }

    cout << "Cap so co hieu lon nhat la: " << num1 << " va " << num2 << endl;
    cout << "Hieu cua chung la: " << maxDiff << endl;

    return 0;
}