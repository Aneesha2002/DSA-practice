// Print
// A B C
// D E F
// G H I
#include<iostream>
using namespace std;
int main() {
int n,r=1,c=1;
int count=1;
cout<<"Enter n: ";
cin>>n;
while(r<=n){
     c=1;
    while(c<=n){
        char ch = 'A'+count-1;
       cout<< ch;
       c++;
       count++;
    }
    cout<<endl;
    r++;
}
}