#include<iostream>
#include<cmath>
using namespace std;
int count_pair(int* arr,int size,int key){
    int i,j,count=0;
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++)
        if(abs(arr[i]-arr[j])==key)
        count++;

    }
    return count;
}
int main(){
    int *arr;
    int t,n,key,count;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        arr=new int[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        cin>>key;
        cout<<"\n"<<count_pair(arr,n,key);
    }
    delete []arr;
}