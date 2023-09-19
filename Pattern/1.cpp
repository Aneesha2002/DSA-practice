// Print
// 1 2 3
// 4 5 6
// 7 8 9
#include<iostream>
using namespace std;

int main() {
    int n, i = 1, j = 1; // Initialize j to 1
    int count=0;
    cout << "Enter n: " << endl;
    cin >> n;

    while (i <= n) {
        j = 1; 
        while (j <= n) { 
            count=count+1;
            cout << count << " ";
            j=j+1;
        }
        i++;
        cout << endl;
    }

    return 0;
}
