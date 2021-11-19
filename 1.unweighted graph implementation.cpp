//unweighted 
#include <bits/stdc++.h>
using namespace std;

void add(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void print(vector<int>adj[],int v){
    for(int i=0;i<v;i++){
        cout<<"adjacency list of vertex:"<<i<<"-->";
        for(int neigh:adj[i]){
            cout<<neigh<<" ";
        }
        cout<<endl;
    }
}
int main() {
	int v=5;
	vector<int> adj[v];
	add(adj,0,1);
	add(adj,0,4);
	add(adj,4,1);
	add(adj,3,4);
	add(adj,3,1);
	add(adj,2,1);	
	add(adj,2,3);
	print(adj,v);
	return 0;
}