#include<iostream>
#include<vector>
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int n){
    for(int node=0; node<n; node++){
        cout<<"adjacent list "<<node;
        for(auto it: adj[node]){
            cout<<"-> "<<it;
        }cout<<endl;
    }
}

int main(){
    cout<<"Enter n, m"<<endl;
    int n, e; // node = 5, edge = 7      (for example)
    cin>>n>>e;
    vector<int> adj[n];

    // addEdge(adj, 0, 1);
    // addEdge(adj, 0, 4);
    // addEdge(adj, 1, 2);
    // addEdge(adj, 1, 3);
    // addEdge(adj, 1, 4);
    // addEdge(adj, 2, 3);
    // addEdge(adj, 3, 4);

    

    for(int i=0; i<e; i++){
        int u, v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    printGraph(adj, n);
    return 0;
}