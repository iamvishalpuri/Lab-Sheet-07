#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[100];
    cout << "Enter string: ";
    cin.getline(s, 100);
    cout << "Length = " << strlen(s) << endl;
    return 0;
}

Output
Enter string : Hello World
Length = 11