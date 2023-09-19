// Print
// A A A
// B B B 
// C C C
#include<iostream>
using namespace std;
int main() {
int n,r=1,c=1;
cout<<"Enter n: ";
cin>>n;
while(r<=n){
     c=1;
    while(c<=n){
        char ch = 'A'+r-1;
       cout<< ch;
       c++;
    }
    cout<<endl;
    r++;
}
}