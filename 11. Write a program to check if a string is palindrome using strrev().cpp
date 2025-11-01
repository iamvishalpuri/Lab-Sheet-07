#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[100], t[100];
    cout << "Enter string: ";
    cin.getline(s, 100);
    strcpy(t, s);
    strrev(t);
    if (strcmp(s, t) == 0) 
        cout << "Palindrome\n";
    else 
        cout << "Not Palindrome\n";
    return 0;
}

Output
Enter string : radar
Palindrome