#include<iostream>
#include<list>
#include<stack>
#include<vector>
using namespace std;
class Graph{
  int V;
  list<int> *adj;
  public:
   Graph(int V){
     this->V=V;
     adj=new list<int>[V];
    }
    void print(){
      for(int j=0;j<V;j++){
       cout<<j<<":";
       for (auto i = adj[j].begin(); i != adj[j].end();i++)
         cout<<*i<<" ";
       cout<<"\n";
      }

    }
    void addEdge(int i,int j){
     adj[i].push_back(j);
    }
   void optGraph(vector<vector<int>>G,int n){
     for(int i=0;i<G.size();i++){
       for(int j=0;j<G[i].size();j++){
         if(G[i][j]==1 && i!=j){
           addEdge(i,j);
          }
         else
           continue;
        }
      }
    }
   bool find(int s, int d){
     if(s==d)
     return true;
     bool *visited=new bool[V];
     for(int i=0;i<V;i++)
         visited[i]=false;
     list <int> queue;
     visited[s]=true;
     queue.push_back(s);
     while(!queue.empty()){
       s = queue.front();
       queue.pop_front();
       for (auto i = adj[s].begin(); i != adj[s].end();i++){
             if (*i == d)
               return true;
             if (!visited[*i]){
                visited[*i] = true;
                queue.push_back(*i);
              }
            }
          }
     return false;
    }
};
int main(){
 int n,s,d,i,j;
 cin>>n;
 Graph g(n);
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
 g.optGraph(G,n);
 cin>>s>>d;
 //g.print();
 if(!g.find(s-1,d-1))
   cout<<"\nNO SUCH PATH EXIST";
 else
   cout<<"\nYES PATH EXIST";   
}