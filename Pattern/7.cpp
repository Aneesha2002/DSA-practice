// Print
// 1
// 2 3
// 4 5 6
// 7 8 9 10
#include<iostream>
using namespace std;
int main() {
int n,r=1,c=1;
int count=0;
cout<<"Enter n: ";
cin>>n;
while(r<=n){
     c=1;
    while(c<=r){
       count=count+1;
       cout<< count;
       c++;
    }
    cout<<endl;
    r++;
}
}