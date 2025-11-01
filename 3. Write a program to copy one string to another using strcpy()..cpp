#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[100], d[100];
    cout << "Enter string: ";
    cin.getline(s, 100);
    strcpy(d, s);
    cout << "Copied: " << d << endl;
    return 0;
}

Output
Enter string : C++ Programming
Copied : C++ Programming