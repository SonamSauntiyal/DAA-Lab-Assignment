#include<iostream>
using namespace std;
int find_sequence(int* arr,int size){
    int i,j,k;
    for(i=0;i<size-2;i++){
        for(j=i+1;j<size-1;j++){
            for(k=j+1;k<size;k++){
                if(arr[i]+arr[j]==arr[k]){
                    cout<<i+1<<" "<<j+1<<" "<<k+1;
                    return 1;
                }
                else if(arr[k]>arr[i]+arr[j])
                break;
            }
        }
    }
    return 0;
}
int main(){
    int t,n,j;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int *arr=new int[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        if(find_sequence(arr,n)==0)
        cout<<"\nNo sequence found";
        delete []arr;
    }
   
}