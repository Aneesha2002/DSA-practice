// Print
// A
// B C
// D E F
// G H I F
#include<iostream>
using namespace std;

int main() {
    int n,r=1, c, i = 1;
    int count=1;
    cout << "Enter n: " << endl;
    cin >> n;
    while (r <= n) {
        c=1;
        while (c <=r ) { 
                   char ch = 'A'+count-1;
            cout << ch;
            count++;
            c=c+1;
        }
        r++;
        cout << endl;
    }

    return 0;
}
