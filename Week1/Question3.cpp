#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
//function for linear search
int linear_search(vector<int> m,int l,int u,int num,int* comp){

    for(auto i=l;i<=u;++i){
        (*comp)++;
        if(num==m[i])
            return 1;
    }
    return -1;
}
//function for jump search
int jump_search(vector<int> a,int num,int* comp){
    *comp=0;
    int i=0,pre=0;
    while(i<a.size()){
        (*comp)++;
        if(a[i]==num)
            return 1;
        else if(a[i]>num && i==0)
            return -1;
        else if(a[i]>num)
            return linear_search(a,pre,i,num,comp);
        else{
            pre=i;
            i+=int(sqrt(a.size())-1);
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
        for(int i=0;i<n;i++){
            cin>>temp;
            a.push_back(temp);
        }
        cin>>num;
        if(jump_search(a,num,comp)==-1)
            cout<<"\nNot Present\n";
        else
            cout<<"\nPresent "<<*comp<<"\n";
    }
    delete comp;
}