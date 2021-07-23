// Linear Search
#include<iostream>
#include<vector>

using namespace std;
//function for linear search
int linear_Search(vector<int> a,int num,int* count){

    for(auto i=a.begin();i!=a.end();++i){
        (*count)++;
        if(num==*i)
            return 1;
    }
    return -1;
}
//Driver code
int main(void){
    vector<int> a;
    int t,n,temp,num,c=0;
    int *count=&c;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for (int i=0;i<n;i++){
            cin>>temp;
            a.push_back(temp);
    }
    cin>>num;
    *count=0;
    if(linear_Search(a,num,count)==-1)
        cout<<"NOT Present "<<*count;
    else
        cout<<"Present "<<*count;
    }
    delete count;
    return 0;
}