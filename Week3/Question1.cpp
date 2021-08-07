#include<iostream>
using namespace std;
void Insertion_sort(int* arr,int n){
    int key,i,j;
    int comparison=0,swapping=0;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(key<arr[j]&&j>=0){
            arr[j+1]=arr[j];//shifts
            comparison++;
            j=j-1;
        }
        arr[j+1]=key;//swapping 
        swapping++;
    }
    cout<<"shifts:"<<comparison<<" swapping:"<<swapping;

}
int main(){
    int t,n,i,j;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        int *arr=new int(n);
        for(j=0;j<n;j++){
            cin>>arr[j];
        }
        Insertion_sort(arr,n);
         for(j=0;j<n;j++){
            cout<<arr[j]<<" ";
        }
        delete [] arr;
    }

    
}