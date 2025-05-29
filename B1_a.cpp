#include <iostream>
using namespace std;

bool tangdan(int* A, int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        if (*(A + i) > *(A + i + 1)) 
        {
            return false;
        }
    }
    return true;
}

bool giamdan(int* A, int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        if (*(A + i) < *(A + i + 1)) 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    int n;

    cout << "Nhap so phan tu cua day A: "; cin >> n;

    int A[n];

    cout << "Nhap cac phan tu cua day A:\n";
    for (int i = 0; i < n; i++) 
    {
        cout << "A[" << i << "] = ";
        cin >> *(A + i); 
    }

    if (tangdan(A, n)) 
    {
        cout << "Day A duoc sap xep theo thu tu tang dan.\n";
    } 
    else if (giamdan(A, n)) 
    {
        cout << "Day A duoc sap xep theo thu tu giam dan.\n";
    } 
    else 
    {
        cout << "Day A khong duoc sap xep theo thu tu tang/giam.\n";
    }

    return 0;
}