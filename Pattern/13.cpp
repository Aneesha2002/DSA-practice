// Print
// A
// B B
// C C C
#include<iostream>
using namespace std;

int main() {
    int n,r=1, c, i = 1;
    cout << "Enter n: " << endl;
    cin >> n;
    while (r <= n) {
        c=1;
        while (c <=r ) { 
            char ch = 'A'+r-1;
            cout << ch;
            c=c+1;
        }
        r++;
        cout << endl;
    }

    return 0;
}
