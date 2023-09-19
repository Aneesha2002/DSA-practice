// Print
// A B C
// B C D
// C D E
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
               char ch = 'A'+r+c-1-1;
       cout<< ch;
       c++;
    }
    cout<<endl;
    r++;
}
}