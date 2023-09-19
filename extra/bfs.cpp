#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void bfs(vector<vector<int>> &graph,int source){
    int n =graph.size();
    queue<int> q;
vector<bool> visited(n,false);
visited[source] = true;
q.push(source);
while(!q.empty()){
    int current = q.front();
    q.pop();
    cout<<current<< " "; 
for(int c: graph[current]){
 if(!visited[c]){
    visited[c] = true;
   q.push(c);
 }
}
}}
int main(){
    int n=7;
    vector<vector<int>> graph(n);   
    graph[0] = {1};
    graph[1] = {2,3};
    graph[2] = {4};
    graph[3] = {4,6};
    graph[4] = {2,3,5};
    graph[5] = {4};
    graph[6] = {3};
   bfs(graph,0);
}