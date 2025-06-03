#include <iostream>
#include <cmath>
using namespace std;

bool ktSNT(int num) 
{
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); i++) 
    {if (num % i == 0) return false;}
    return true;
}

int checkSNTnear(int n) 
{
    int candidate = n + 1;
    while (!ktSNT(candidate)) 
    {candidate++;}
    return candidate;
}

int main() 
{
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    if (n <= 0) 
    {
        cout << "Vui long nhap so nguyen duong!" << endl;
        return 1;
    }

    int result = checkSNTnear(n);
    cout << "So nguyen to can tren gan nhat voi " << n << " la: " << result << endl;

    return 0;
}