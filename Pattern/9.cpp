// Print
// A B C
// A B C
// A B C
#include<iostream>
using namespace std;
int main() {
int n,r=1,c=1;
cout<<"Enter n: ";
cin>>n;
while(r<=n){
     c=1;
    while(c<=n){
        char ch = 'A'+c-1;
       cout<< ch;
       c++;
    }
    cout<<endl;
    r++;
}
}