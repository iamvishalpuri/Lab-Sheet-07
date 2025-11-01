#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char a[100], b[100], x[100], y[100];
    int i, j, t;
    cout << "Enter first string: ";
    cin.getline(a, 100);
    cout << "Enter second string: ";
    cin.getline(b, 100);
    if (strlen(a) != strlen(b)) {
        cout << "Not Anagram\n";
        return 0;
    }
    strcpy(x, a);
    strcpy(y, b);
    for (i = 0; x[i]; i++) x[i] = tolower(x[i]);
    for (i = 0; y[i]; i++) y[i] = tolower(y[i]);

    for (i = 0; i < strlen(x) - 1; i++)
        for (j = 0; j < strlen(x) - 1 - i; j++)
            if (x[j] > x[j + 1]) {
                t = x[j]; x[j] = x[j + 1]; x[j + 1] = t;
            }
    for (i = 0; i < strlen(y) - 1; i++)
        for (j = 0; j < strlen(y) - 1 - i; j++)
            if (y[j] > y[j + 1]) {
                t = y[j]; y[j] = y[j + 1]; y[j + 1] = t;
            }
    if (strcmp(x, y) == 0)
        cout << "Anagram\n";
    else
        cout << "Not Anagram\n";
    return 0;
}

Output
Enter first : listen
Enter second : silent
Anagram