// Print
// D
// C D
// B C D
// A B C D
#include<iostream>
using namespace std;
int main() {
int n,r=1,c=1;
int count=0;
cout<<"Enter n: ";
cin>>n;
while(r<=n){
     c=1;
        char start = 'A'+n-r;
    while(c<=r){
       cout<< start;
       start++;
       c++;
    }
    cout<<endl;
    r++;
}
}