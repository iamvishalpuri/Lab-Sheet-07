#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[100], c; char* p;
    cout << "Enter string: "; 
    cin.getline(s, 100);
    cout << "Find char: "; 
    cin >> c;
    p = strrchr(s, c);
    if (p) 
        cout << "Last at position: " << (p - s) << endl;
    else 
        cout << "Not found\n";
    return 0;
}

Output
Enter string : Mississippi
Find char : s
Last at position : 6