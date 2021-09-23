// Quick sort algo
#include<iostream>
#include<time.h>
using namespace std;
int partition(int* a, int l,int r){
    int pivot =a[r];
    int i=l-1;
    for(int j =0;j<r;j++)
        if(a[j]<pivot){
            i++;
            swap(a[j],a[i]);
        }
    swap(a[i+1],a[r]);// pivot element is swapped to its right position 
    return (i+1);
    

}
int random_pivot(int* a,int l,int r){
        srand(time(NULL));
        int x=l+rand()%(r-l+1);
        swap(a[x],a[r]);
        return partition(a,l,r);
}

void quicksort(int* a,int l,int r ){
    if(l<r){
        
        int p= random_pivot(a,l,r);//new position of previous pivot element 
        quicksort(a,l,p-1);
        quicksort(a,p+1,r);
    }

}
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int* a=new int(n);
        for(int j=0;j<n;j++)
            cin>>a[j];
        quicksort(a,0,n-1);
        for(int j=0;j<n;j++)
            cout<<a[j];
        delete []a;
    }

} 