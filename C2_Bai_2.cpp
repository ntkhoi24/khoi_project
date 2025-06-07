#include<iostream>
#include <cmath> 
using namespace std;

int main()
{
    int a, b, c;
    double delta;
    cout<<"Nhap lan luot 3 so a, b, c: \n";
    cin>>a>>b>>c;
    delta = b*b - 4*a*c;
    if(delta<0)
    {
        cout<<"PT vo nghiem";
    }
    else
    {
        if(delta==0)
        {
            cout<<"PT co nghiem kep x1 = x2 = "<<-b/(2*a);
        }
        else
        {
            cout<<"PT co 2 nghiem phan biet: \n";
            cout<<"x1 = "<<(-b + (sqrt(delta)))/(2*a)<<"\n";
            cout<<"x2 = "<<(-b - (sqrt(delta)))/(2*a)<<"\n";
        }
    }
}