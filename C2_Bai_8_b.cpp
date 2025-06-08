#include <iostream>
using namespace std;

int main() 
{
    int n;
    double sum=0.0;
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;

    if (n <= 0) 
    {
        cout << "Vui long nhap mot so nguyen duong." << endl;
    }
    for (int i = 1; i <= n; ++i) 
    {
        sum += 1.0 / i;
    }

    cout << "S  = " << sum << endl;

    return 0;
}