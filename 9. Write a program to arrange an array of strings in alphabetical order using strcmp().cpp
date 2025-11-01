#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int n, i, j; char a[10][50], t[50];
    cout << "Enter count: "; 
    cin >> n;
    cout << "Enter names:\n";
    for (i = 0; i < n; i++) 
        cin.getline(a[i], 50);
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (strcmp(a[j], a[j + 1]) > 0) 
            {
                strcpy(t, a[j]); 
                strcpy(a[j], a[j + 1]);
                strcpy(a[j + 1], t);
            }
    cout << "Sorted:\n";
    for (i = 0; i < n; i++) cout << a[i] << endl;
    return 0;
}

Output
Enter count : 3
Enter names :
Zara
Aman
Priya
Sorted :
Aman
Priya
Zara