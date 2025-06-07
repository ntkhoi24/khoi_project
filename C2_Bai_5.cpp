#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "Nhap lan luot so thu nhat, hai, ba va tu: "<<endl;     
    cin >> a>> b>> c>> d;

    int max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }

    cout << "So lon nhat la: " << max << endl;

    return 0;
}