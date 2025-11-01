#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[200] = "", t[50];
    int i, n;
    cout << "Enter count: "; 
    cin >> n; 
    cout << "Enter " << n << " words:\n";
    for (i = 0; i < n; i++) {
        cin.getline(t, 50);
        strcat(s, t); 
        if (i < n - 1) 
            strcat(s, " ");
    }
    cout << "Sentence: " << s << endl;
    return 0;
}

Output
Enter count : 3
Enter 3 words :
    I
    love
    coding
    Sentence : I love coding