//unweighted 
#include <bits/stdc++.h>
using namespace std;

void add(vector<pair<int,int>>adj[],int u,int v,int wt){
    adj[u].push_back({v,wt});
    adj[v].push_back({u,wt});
}
void print(vector<pair<int,int>>adj[],int v){
    for(int i=0;i<v;i++){
        cout<<"adjacency list of vertex:"<<i<<"-->";
        for(auto neigh:adj[i]){
            cout<<"("<<neigh.first<<","<<neigh.second<<")"<<" ";
        }
        cout<<endl;
    }
}
int main() {
	int v=5;
	vector<pair<int,int>> adj[v];
	add(adj,0,1,1);
	add(adj,0,4,2);
	add(adj,4,1,3);
	add(adj,3,4,4);
	add(adj,3,1,5);
	add(adj,2,1,6);	
	add(adj,2,3,7);
	print(adj,v);
	//bfs(adj,v);
	return 0;
}