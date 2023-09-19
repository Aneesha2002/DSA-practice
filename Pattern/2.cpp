// Print
// 1
// 2 1
// 3 2 1
// 4 3 2 1
#include<iostream>
using namespace std;
int main() {
int n,r=1,c=1;
int count=0;
cout<<"Enter n: ";
cin>>n;
while(r<=n){
     c=1;
       int x=r;
    while(c<=r){
       cout<< x;
       x--;
       c++;
    }
    cout<<endl;
    r++;
}
}