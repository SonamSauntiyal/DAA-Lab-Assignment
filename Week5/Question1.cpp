#include<iostream>
#include<string>
using namespace std;
void count_sort(string str){
    int l=str.length();
    int* count=new int(l);
    count=0;
    for(int i=0;i<l;i++)
    cout<<count[i];



}
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        string str;
        cin>>str;
        fflush(stdin);
        count_sort(str);
    
    }

}