#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Nhap vao mot ky tu: ";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
    {
        cout << "Ky tu " << ch << " la chu cai Latinh." << endl;
    } 
    else 
    {
        cout << "Ky tu " << ch << " khong phai la chu cai Latinh." << endl;
    }

    return 0;
}