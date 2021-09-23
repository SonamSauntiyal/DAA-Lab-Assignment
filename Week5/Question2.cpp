#include<iostream>
using namespace std;
int partition(int* a,int l,int r){
    int pivot=a[r];
    int i=l-1;
    for(int j=1;j<=r-1;j++)
    if(a[j]<pivot){
        i++;
        swap(a[j],a[i]);
    }
    swap(a[i+1],a[r]);
    return(i+1);
}
void Qsort(int* a,int l,int r){
    if(l<r){
        int p=partition(a,l,r);
        Qsort(a,l,p-1);
        Qsort(a,p+1,r); 
    }
}
int main(){
    int n,t,k;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int* a=new int(n);
        for(int j=0;j<n;j++)
        cin>>a[j];
       // Qsort(a,0,n-1);
        for(int j=0;j<n;j++)
        cout<<a[j]<<",";
        cin>>k;
        for(int p=0;p<n-1;p++)
            for(int q=1;q<n;q++)
                    if(k=a[p]+a[q])
                    cout<<a[p]<<" "<<a[q]<<"\n";
        delete []a;
    }
    
}