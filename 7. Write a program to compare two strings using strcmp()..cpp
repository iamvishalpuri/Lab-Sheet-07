#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char a[100], b[100];
    cout << "Enter first: "; 
    cin.getline(a, 100);
    cout << "Enter second: "; 
    cin.getline(b, 100);
    int r = strcmp(a, b);
    if (r == 0) 
        cout << "Equal\n";
    else if (r < 0)
        cout << "First < Second\n";
    else
        cout << "First > Second\n";
    return 0;
}

Output
Enter first : Apple
Enter second : Banana
First < Second