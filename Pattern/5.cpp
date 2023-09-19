// Print
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
#include<iostream>
using namespace std;
int main(){
    int r,c,i=1,j;
    cout<<"Enter rows "<<endl;
    cin>>r;
    cout<<"Enter cols "<<endl;
    cin>>c;
    while(i<=r){
        j=1;
        while(j<=c){
            cout<<j<<" ";
            j=j+1;
        }
        i++;
        cout<<endl;
    }
}
