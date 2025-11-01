#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[100]; int i, c = 0;
    cout << "Enter string: ";
    cin.getline(s, 100);
    for (i = 0; i < strlen(s); i++)
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') c++;
    cout << "Vowels = " << c << endl;
    return 0;
}

Output
Enter string : Education
Vowels = 5
