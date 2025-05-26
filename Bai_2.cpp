#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, a, b, c, gan_giong, minDiff;

    cout << "Nhap n: ";  cin >> n;
    cout << "Nhap lan luot so a, b, c: \n ";  
    cin >>a>>b>>c;

    gan_giong = a;
    minDiff = abs(n - a);

    if (abs(n - b) < minDiff) 
    {   gan_giong = b;
        minDiff = abs(n - b); }

    if (abs(n - c) < minDiff) 
    {   gan_giong = c;
        minDiff = abs(n - c); }

    cout << "So co gia tri gan nhat " << n << " la: " << gan_giong;

    return 0;
}