#include <iostream>
using namespace std;
int nthfibo(int a){
if(a==0)
return 0;
if(a==1)
return 1;
int ans = nthfibo(a-1)+nthfibo(a-2);
return ans;
}
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
cout<<"The fibonnaci term at position "<<n<<" is "<<nthfibo(n);
}