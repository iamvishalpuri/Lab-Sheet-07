#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[100], t[100]; int i, j = 0;
    cout << "Enter string: ";
    cin.getline(s, 100);
    for (i = 0; i < strlen(s); i++) {
        char c = s[i];
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))
            t[j++] = c;
    }
    t[j] = '\0';
    cout << "Without vowels: " << t << endl;
    return 0;
}

Output
Enter string : Education
Without vowels : dctn