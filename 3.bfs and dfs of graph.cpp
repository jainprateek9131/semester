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
void bfs(vector<int> adj[],int v,int src){
    vector<bool> visited(v,false);
    queue<int>q;
    q.push(src);
    visited[src]=true;
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        cout<<temp<<" ";
        for(auto neigh: adj[temp]){
            if(!visited[neigh]){
                visited[neigh]=true;
                q.push(neigh);
            }
        }
    }
}
void dfs_helper(vector<int> adj[],vector<bool> &visited,int node){
    visited[node]=true;
    cout<<node<<" ";
    for(int neigh:adj[node]){
        if(visited[neigh]==false){
            dfs_helper(adj,visited,neigh);
        }
    }
}
void dfs(vector<int> adj[],int v,int src){
    vector<bool> visited(v,false);
    dfs_helper(adj,visited,src);
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
	cout<<"bfs:";
	bfs(adj,v,0);
	cout<<endl;
	cout<<"dfs:";
	dfs(adj,v,0);
	cout<<endl;
	
	return 0;
}