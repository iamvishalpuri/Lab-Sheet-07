#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char a[100], b[100];
    cout << "Enter first: "; 
    cin.getline(a, 100);
    cout << "Enter second: "; 
    cin.getline(b, 100);
    strcat(a, b);
    cout << "Concatenated: " << a << endl;
    return 0;
}

Output
Enter first : Hello
Enter second : World
Concatenated : Hello World