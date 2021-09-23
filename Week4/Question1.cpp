//merge sort
#include<iostream>
using namespace std;
void merge(int* a,int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;
    int* L= new int[n1];
    int* R= new int[n2];
    for(int i=0;i<n1;i++)
        L[i]=a[l+i];
    for(int i=0;i<n2;i++)
        R[i]=a[m+1+i];

    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j])
          a[k++]=L[i++];
        else
          a[k++]=R[j++];
    }
    while(i<n1)
        a[k++]=L[i++];
    while(j<n2)
        a[k++]=R[j++];

}
void mergesort(int* a,int l,int r){
    if(l<r){
        int m =(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }

}
int duplicate( int* a,int n){
    int flag =0;
    for(int i=0;i<n;i++)
    if(a[i]==a[i+1]){
        flag=1;
        return flag;
    }
    return flag;
}
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int *a=new int[5];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        mergesort(a,0,n-1);
        if(!duplicate(a,n))
            cout<<"NO";
        else
            cout<<"YES";
        delete []a;
    }
}