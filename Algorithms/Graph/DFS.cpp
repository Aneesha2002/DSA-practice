#include <vector>
#include <iostream>
using namespace std;
void  DFS(vector<vector<int>> graph,vector<bool> visited,int current){
    cout<<current<<" ";
    visited[current]=true;
    for(int neighbour: graph[current]){
        if(!visited[neighbour]){
            DFS(graph,visited,neighbour);
        }
    }
}
int main(){
    int  vertices=7;
    vector<vector<int>> graph(vertices);
    graph[0]={1,2};
    graph[1]={0,3,4};
    graph[2]={0,5};
    graph[3]={1};
    graph[4]={1};
    graph[5]={2,6};
    graph[6]={5};
    vector<bool> visited(vertices,false);
    DFS(graph,visited,0);
}