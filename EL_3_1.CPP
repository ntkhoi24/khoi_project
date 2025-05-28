#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int soduong = 0, soam = 0;
    for (int i = 0; i < n; i++) 
    {
        int num;
        cout << "Nhap so thu " << i + 1 << ": ";
        cin >> num;

        if (num > 0) 
        {soduong++;} 
        else if (num < 0) 
        {soam++;}
    }

    cout << "SL so duong: " << soduong << endl;
    cout << "SL so am: " << soam << endl;

    return 0;
}