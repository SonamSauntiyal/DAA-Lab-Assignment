#include<iostream>
#include<vector>
using namespace std;
void count(){

}
int main(){
    int V,i,j,temp;
    cin>>V;
    vector<vector<int>> graph(V,vector<int>(V,0));
    for(i=0;i<V;i++)
    {   
        for(j=0;j<V;j++){
            cin>>graph[i][j];
    }
}