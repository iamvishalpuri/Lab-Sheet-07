#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[200]; int i, w = 1;
    cout << "Enter sentence: ";
    cin.getline(s, 200);
    for (i = 0; i < strlen(s); i++)
        if (s[i] == ' ' && s[i + 1] != ' ') 
            w++;
    cout << "Words = " << w << endl;
    return 0;
}

Output
Enter sentence : This is a test
Words = 4