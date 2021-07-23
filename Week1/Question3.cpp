#include<iostream>
#include<vector>
using namespace std;
//function for linear search
int linear_search(vector<int> m,int l,int u,int num,int* count){

    for(auto i=l;i<=u;++i){
        (*count)++;
        if(num==m[i])
            return 1;
    }
    return -1;
}
//function for jump search
int jump_search(vector<int> a,int block,int num,int* count){
    for (auto i=0;i<a.size();i=i+block){
        (*count)++;
        if(a[i]==num)
            return 1;
        else if(a[i]>num){
            if(linear_search(a,i,i+2,num,count)==-1)
                return -1;
            else 
                return 1;
        }
    }
    return -1;
}
// driver code
int main(){
    vector<int> a;
    int t,n,temp,c=0,num;
    int *comp=&c;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        *comp=0;
        for(int i=0;i<n;i++){
            cin>>temp;
            a.push_back(temp);
        }
        cin>>num;
        if(jump_search(a,2,num,comp)==-1)
            cout<<"Not Present\n";
        else
            cout<<"Present "<<*comp<<"\n";
    }
    delete comp;
}