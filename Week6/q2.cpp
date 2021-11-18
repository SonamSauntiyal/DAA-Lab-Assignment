#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;
bool bipartite(vector <vector<int>>G){
  int V=G.size();
  queue<int> q;
  vector<int> colorArr;
  for(int i=0;i<V;i++)
    colorArr.push_back(-1);
  colorArr[0]=1;
  q.push(0);
  while(!q.empty()){
    int u=q.front();
    q.pop();
    if(G[u][u]==1)
      return false;
    for(int i =0;i<V;i++)
      if(G[u][i]==1&&colorArr[i]==-1){
         colorArr[i]=1-colorArr[u];
         q.push(i);
      }
      else if(G[u][i]==1 && colorArr[i]==colorArr[u])
         return false;
  }
  return true;
}

int main(){
 int n,s,d,i,j;
 cin>>n;
 vector<vector<int>> G;
 for(i=0;i<n;i++){
      vector<int>v;
      int temp;
      for(j=0;j<n;j++){
         cin>>temp;
         v.push_back(temp);
      }
      G.push_back(v);
  }
 if( bipartite(G))
      cout<<"\nYES it is Bipartite\n";
 else
      cout<<"\n NOT Bipartite\n";
}