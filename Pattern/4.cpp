// Print
// 3 2 1
// 3 2 1
// 3 2 1
#include<iostream>
using namespace std;

int main() {
    int r, c, i = 1, j = 1; 
    cout << "Enter rows: " << endl;
    cin >> r;
    cout << "Enter cols: " << endl;
    cin >> c;

    while (i <= r) {
        j = c; 
        while (j >= 1) { 
            cout << j << " ";
            j--;
        }
        i++;
        cout << endl;
    }

    return 0;
}
