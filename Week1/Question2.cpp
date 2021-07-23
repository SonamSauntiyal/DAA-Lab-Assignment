#include<iostream>
#include<vector>
using namespace std;
//function for binary search
int binary_search(vector<int> a,int l,int h,int num,int* count){
    int mid;
    while(h>l){
        (*count)++;
        mid=l+((h-l)/2);
        if(a[mid]==num){
        return 1;
        }
        else if(a[mid]>num){
          h=mid-1;  
        }
        else
          l=mid+1;
    }
    return -1;

}
//driver function
int main(){
    vector<int> a;
  int c=0,size,temp,num;
  int *count=&c;
  cin>>size;
  for(int i=0;i<size;i++){
    cin>>temp;
    a.push_back(temp);
  }
  cin>>num;
  if(binary_search(a,0,size-1,num,count)==-1)
  cout<<"Not Present";
  else
  cout<<"Present "<<*count;
  delete count;

}