#include<iostream>
using namespace std;
int dul(int* f,int n1,int* s,int n2){
    int i,j;
    i=0;
    j=0;
    int flag=0;
    while(i!=n1&&j!=n2){
        if(f[i]==s[j]){
            cout<<f[i]<<" ";
            i++;
            j++;
            flag=1;
        }
        else
            j++;

    }
    return flag;
}
int main(){
    int n1,n2,t;
    cin>>t;
    for(int y=0;y<t;y++){
        cin>>n1>>n2;
        int* first = new int(n1);
        int* second = new int(n2);
        for(int i=0;i<n1;i++)
            cin>>first[i];
        for(int i=0;i<n2;i++)
            cin>>second[i];
        if(n1<n2){
            if(!dul(first,n1,second,n2))
            cout<<"\nNo common element is found";
        }

        else
           { if(!dul(second,n2,first,n1))
            cout<<"\nNo common element is found";
           }
        delete []first,second;
    }

}