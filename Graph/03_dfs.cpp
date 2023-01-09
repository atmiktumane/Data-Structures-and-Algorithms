#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;

    vector<list<int>> adj;

    public:

    Graph(int V);

    void addEdge(int u, int v);

    void DFS(int s);
};

Graph:: Graph(int V){
    this->V = V;
    adj.resize(V);
}

void Graph:: addEdge(int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void Graph:: DFS(int s){
    vector<bool> vis(V, 0);
    
    cout<<s<<" ";
    vis[s] = 1;

    for(auto it: adj[s]){
        if(!vis[it])
            DFS(it);
    }
}

int main(){
    Graph g(4);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
    g.addEdge(3,4);
    

    g.DFS(0);
    return 0;
}