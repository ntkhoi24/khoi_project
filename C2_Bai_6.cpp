#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    
    cout << "Nhap mot ky tu: ";
    cin >> ch;
    
    if (isalpha(ch)) {  
        if (isupper(ch)) {
            ch = tolower(ch);  
        } else {
            ch = toupper(ch);  
        }
    }
    
    cout << "Ket qua: " << ch << endl;
    
    return 0;
}