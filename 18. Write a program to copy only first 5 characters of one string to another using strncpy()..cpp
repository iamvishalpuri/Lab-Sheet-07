#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[100], d[10];
    cout << "Enter string: ";
    cin.getline(s, 100);
    strncpy(d, s, 5); 
    d[5] = '\0';
    cout << "First 5: " << d << endl;
    return 0;
}

Output
Enter string : Wonderful
First 5 : Wonde