#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[100], t[50]; char* p;
    cout << "Enter main string: "; 
    cin.getline(s, 100);
    cout << "Enter substring: ";
    cin.getline(t, 50);
    p = strstr(s, t);
    if (p) 
        cout << "Found at: " << (p - s) << endl;
    else 
        cout << "Not found\n";
    return 0;
}

Output
Enter main string : I love C++ programming
Enter substring : C++
Found at : 7