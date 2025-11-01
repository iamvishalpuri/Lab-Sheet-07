#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char a[100], b[100], c[100];
    cout << "Enter first: "; 
    cin.getline(a, 100);
    cout << "Enter second: "; 
    cin.getline(b, 100);
    strcpy(c, a);
    if (strcmp(c, b) == 0) 
        cout << "Equal\n";
    else 
        cout << "Not Equal\n";
    return 0;
}

Output
Enter first : Hello
Enter second : Hello
Equal