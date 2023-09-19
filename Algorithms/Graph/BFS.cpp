#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void BFS(vector<vector<int>> graph,int source){
    int vertices = graph.size();
    vector<bool> visited(vertices,false);
    queue<int> q;
    visited[source]= true;
    q.push(source);
    while(!q.empty()){
        int current= q.front();
        q.pop();
        cout<<current<<" ";
        for(int neighbour:graph[current]){
            if(!visited[neighbour]){
                visited[neighbour]=true;
                q.push(neighbour);
            }
        }
    }
}
int main(){
    int vertices=7;
    vector<vector<int>> graph(vertices);
    graph[0] ={1,3};
    graph[1] ={0,1,2};
    graph[2] ={1,3,5};
    graph[3] ={0,2,6};
    graph[4] ={5,6};
    graph[5] ={2,4};
    graph[6] ={3,4};
cout<<"BFS starting from vertex 0:";
BFS(graph,0);
return 0;
}