#include<iostream>
#include<climits>
#include<vector>
using namespace std;

void display(vector<vector<int>>& sol,int V){
     for(int i=0;i<V;i++){
      cout<<"\n";
     for(int j=0;j<V;j++)
       if(sol[i][j]==99)
       cout<<" INF";
       else
       cout<<" "<<sol[i][j];
    }
}

void floyd(vector<vector<int>>& graph,int V){
    vector<vector<int>> sol(V,vector<int>(V,0));
    for(int i=0; i<V; i++){
     for(int j=0; j<V; j++)
       sol[i][j]=graph[i][j];
    }
     
    for(int k=0;k<V;k++)
      for(int i=0;i<V;i++)
         for(int j=0;j<V;j++)
         {
             if(sol[i][j]>(sol[i][k]+sol[k][j])&&(sol[i][k]!=99&&sol[k][j]!=99))
             sol[i][j]=sol[i][k]+sol[k][j];
         }
  display(sol,V);
}

int main(){
    int t,V;
    cin>>V;
    vector<vector<int>> graph(V,vector<int> (V,0));
    for(int i=0;i<V;i++)
        for(int j=0;j<V;j++)
            cin>>graph[i][j];
    floyd(graph,V);
    return 0;
}