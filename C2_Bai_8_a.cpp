#include <iostream>
using namespace std;

int main() 
{
    int n, sum=0;
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;

    if (n <= 0) 
    {
        cout << "Vui long nhap mot so nguyen duong.";
    }
    for (int i = 1; i <= n; ++i) 
    {
        sum += i;
    }

    cout << "S  = " << sum;

    return 0;
}