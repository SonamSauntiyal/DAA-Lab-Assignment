#include<iostream>
using namespace std;
void selection_sort(int* arr,int n){
    int i,j,index,min;
    for(j=0;j<n-1;j++){
        min=arr[j];
        for(i=j+1;i<n;i++)
        {
            if(min>arr[i])
            {  min=arr[i];
                index=i;
            }
        }
        arr[index]=arr[j];
        arr[j]=min;
    }

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
        selection_sort(arr,n);
        for(j=0;j<n;j++){
            cout<<arr[j]<<" ";
        }
        delete [] arr;
    }
}