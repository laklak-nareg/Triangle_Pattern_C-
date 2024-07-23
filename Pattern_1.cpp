#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; j++) {
            cout << "#";
        }
        for (int j = 0; j < 2*(n-i); j++) {
            cout << " ";
        } 
        cout << " ";
        for (int j = 0; j < i; j++) {
            cout << "#";
        }
        cout << " ";
        for (int j = 0; j < n-i+1; j++) {
            cout << "#";
        }
        cout << " ";
        for (int j = 0; j < 2*(i-1); j++) {
            cout << " ";
        }
        for (int j =0;j<n-i+1;j++) {
            cout << "#";
        }        
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the triangles (n): ";
    cin >> n;

    printPattern(n);

    return 0;
}