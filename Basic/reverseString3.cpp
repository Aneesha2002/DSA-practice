//space complexity of your code is O(n) due to the vector a
//time complexity is O(n) due to the reversing operation.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char> a ={'A','n','e','e','s','h','a'};
    int n= a.size();
    for(int i=0;i<n/2;i++){
        char t = a[i];
        a[i] = a[n-i-1];
         a[n-i-1] = t;
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}