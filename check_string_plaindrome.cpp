#include<iostream>
#include<string>
using namespace std;


bool isplaindrome(int i,int j,string s){
    if(i>=j)return true;
    if(s[i]!=s[j])return false;
    isplaindrome(i+1,j-1,s);
}
int main(){
    string s;
    cin>>s;
    int n=s.size();
    if(isplaindrome(0,n-1,s))cout<<"This is  Plaindrome";
    else cout<<"This is Not plaindrome";
}