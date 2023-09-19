// Print
// 1
// 2 2
// 3 3 3
// 4 4 4 4
#include<iostream>
using namespace std;
int main() {
int n,r=1,c=1;
cout<<"Enter n: ";
cin>>n;
while(r<=n){
     c=1;
    while(c<=r){
       cout<< r;
       c++;
    }
    cout<<endl;
    r++;
}
}