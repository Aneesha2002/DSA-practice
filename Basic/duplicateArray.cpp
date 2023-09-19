#include<iostream>
#include<vector>
using namespace std;
vector<int> dupArr(int arr[],int n){
 vector<int> ans;
for(int i=0;i<n;i++){
    int index = (arr[i])%n;
    arr[index]=arr[index]+n;
  //  cout<<arr[index]<<" "<<index<<"\t";
}
for(int i=0;i<n;i++){
    if((arr[i]/n)>=2){
        ans.push_back(i);
    }
}
if(ans.size()==0)
return {-1};

return ans;
}
int main(){
    int arr[] = {1,1,2,3,4,6,6,7,3,8,9,10};  
    int n = sizeof(arr)/sizeof(arr[0]);
   // cout<<n<<endl;
    vector<int> a =  dupArr(arr,n);
    if(a[0]==-1){
        cout<<"No duplicates";
    }
     for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";    
     }
}