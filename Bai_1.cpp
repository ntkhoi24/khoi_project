#include <iostream>
using namespace std;

int main() 
{
    int a, b, c, so_giua;

    cout << "Nhap lan luot a, b, c \n";    cin >> a>>b>>c;

    if ((a > b && a < c) || (a > c && a < b)) 
    {so_giua = a;} 
    else 
    if ((b > a && b < c) || (b > c && b < a)) 
    {so_giua = b;} 
    else 
    {so_giua = c;}

    cout << "So nam giua: " << so_giua;

    return 0;
}