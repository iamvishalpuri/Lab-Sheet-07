#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char a[100], b[50];
    cout << "Enter main: "; 
    cin.getline(a, 100);
    cout << "Enter search: "; 
    cin.getline(b, 50);
    if (strstr(a, b)) 
        cout << "Present\n";
    else
        cout << "Not Present\n";
    return 0;
}

Output
Enter main : Data Structure
Enter search : act
Not Present