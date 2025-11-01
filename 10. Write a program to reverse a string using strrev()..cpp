#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[100];
    cout << "Enter string: ";
    cin.getline(s, 100);
    strrev(s);
    cout << "Reversed: " << s << endl;
    return 0;
}

Output
Enter string : Computer
Reversed : retupmoC