#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char f[50], l[50], n[100] = "";
    cout << "First name: "; 
    cin >> f;
    cout << "Last name: ";
    cin >> l;
    strcat(n, f); 
    strcat(n, " "); 
    strcat(n, l);
    cout << "Full name: " << n << endl;
    return 0;
}

Output
First name : Vishal
Last name : Puri
Full name : Vishal Puri