//this is for undirected not weighted graph

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    
    vector<int> adjacencyList[nodes+1];
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u);
    }
    
    for(int i=0;i<=nodes;i++){
        cout<<i<<"--->";
        for(int j=0;j<adjacencyList[i].size();j++){
            cout<<adjacencyList[i][j]<<",";
        }
        cout<<endl;
    }
    return 0;
}
