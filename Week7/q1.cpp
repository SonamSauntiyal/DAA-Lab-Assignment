#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int min_dis(vector<int>dist,vector<bool>visited,int V){
    int min=INT_MAX,index;
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false&&dist[i]<min)
        min=dist[i];
        index=i;
    }
    return index;

}
void dijkstra( vector<vector<int>> &graph,int src,int V){
    vector<int> dist;
    vector<bool> visited;
    for(int i=0;i<V;i++){
        dist.push_back(INT_MAX);
        visited.push_back(false);
    }
    dist[src]=0;
    for(int count=0;count<V;count++){
        int u=min_dis(dist,visited,V);
        visited[u]=true;
        for(int i=0;i<V;i++){
            if(!visited[i]&&graph[u][i]&&dist[i]!=INT_MAX&&(dist[u]+graph[u][i]<dist[i]))
            dist[i]= dist[u]+graph[u][i];
        }
    }
     for(int i=0;i<V;i++)
     cout<<" "<<dist[i];

}
int main(){
    int V,i,j,temp;
    cin>>V;
    vector<vector<int>> graph (V,vector<int> (V,0));
    for(i=0;i<V;i++)
    {   

        for(j=0;j<V;j++)
        cin>>graph[i][j];
    }
    int src;
    cin>>src;
    dijkstra(graph,src,V);
}