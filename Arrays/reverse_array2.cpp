// REVERSE THE STRING

// Approach 1:
/*#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
     cout<<"Reversed array"<<"\n";
    for(i=n-1;i>=0;i--){
        cout<<arr[i]<<"\t";
    }
    return 0;
}
*/
// Approach 2:

#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0;
    int e=n-1;
    while(s<e){
swap(arr[s],arr[e]);
s++;
e--;}
    for(i=0;i<n;i++)
  cout<<arr[i]<<"\t";
 return 0;
}
