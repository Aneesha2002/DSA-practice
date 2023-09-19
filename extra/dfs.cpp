#include<iostream>
#include<vector>
using namespace std;
void dfs(vector<vector<int>> &graph,vector<bool> &visited,int i){
cout<<i<<" ";
    visited[i]=true;
    for(int c: graph[i]){
       if(!visited[c]){
        dfs(graph,visited,c); 
       }
    }
}
int main(){
    int n=7;
    vector<vector<int>> graph(n);
    vector<bool> visited(n,false);
    graph[0] = {1};
    graph[1] = {2,3};
    graph[2] = {4};
    graph[3] = {4,6};
    graph[4] = {2,3,5};
    graph[5] = {4};
    graph[6] = {3};
dfs(graph,visited,0);
}