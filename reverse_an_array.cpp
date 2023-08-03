#include<iostream>
using namespace std;

void f(int idx,int n,int arr[]){
    if(idx==n)return ;
     f(idx+1,n,arr);
    cout<<arr[idx]<<endl;
   
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    f(0,n,arr);
}