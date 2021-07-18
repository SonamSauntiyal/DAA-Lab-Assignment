#include<iostream>
using namespace std;
//funtion for linear search
int linear_search(int a[],int size,int num,int *c){
      for(int i=0;i<size;i++){
          if(a[i]==num)
          (*c)++;
      }
      return *c;

}
//Driver code
int main(){
    int t,size,a[10],num,c=0;
    int *pc=&c;
    cin>>t;
    cin>>size;
    for(int i=0;i<size;i++)
        cin>>a[i];
    for(int i=0;i<t;i++){
        *pc=0;
        cin>>num;
        if(linear_search(a,size,num,pc)!=0)
            cout<<"YES "<<*pc<<"\n";
        else
            cout<<"NO\n";
    }
    delete pc;
}