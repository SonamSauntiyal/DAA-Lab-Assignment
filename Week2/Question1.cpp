#include<iostream>
#include<vector>
using namespace std;
int frequency(int* arr,int h,int key){
    int count=0;
        for(int i =0;i<h;i++){
        if(arr[i]==key)
        count++;
    }
    return count;
}
int search(int* arr,int h,int key ){
    int l,mid,i;
    l=0;
    while(l<h){
        mid=(l+((h-l)/2));
        if(key==arr[mid]){
            return frequency(arr,h,key);  
        }
        else if(key>arr[mid])
            l=mid+1;
        else
            h=mid-1;
    }
    return 0;
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
        count=0;
        cin>>key;
        count=search(arr,n,key);

        if(count==0)
            cout<<"\nKey Not Present";
        else
        cout<<"\n"<<key<<":"<<count;
    }
    delete [] arr;
}